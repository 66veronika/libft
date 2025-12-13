#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 128
#endif

/* --- UTILITY FUNKCE --- */

static int ft_strlen(char *s)
{
    int i = 0;
    while (s && s[i])
        i++;
    return i;
}

static char *ft_strdup(char *s)
{
    int len = ft_strlen(s);
    char *new = malloc(len + 1);
    int i = 0;
    if (!new)
        return NULL;
    while (i < len)
    {
        new[i] = s[i];
        i++;
    }
    new[i] = '\0';
    return new;
}

static char *ft_strjoin(char *s1, char *s2)
{
    int i = 0, j = 0;
    int len = ft_strlen(s1) + ft_strlen(s2);
    char *new = malloc(len + 1);
    if (!new)
        return NULL;
    while (s1 && s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    while (s2 && s2[j])
        new[i++] = s2[j++];
    new[i] = '\0';
    free(s1);
    return new;
}

static int has_newline(char *s)
{
    int i = 0;
    if (!s) return 0;
    while (s[i])
    {
        if (s[i] == '\n')
            return 1;
        i++;
    }
    return 0;
}

/* --- SECRET ENTRANCE (mini GNL) --- */

char *secret_entrance(int fd)
{
    static char *stash = NULL;
    char buffer[BUFFER_SIZE + 1];
    int bytes;
    int i;
    char *line;

    while (!has_newline(stash))
    {
        bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes <= 0)
            break;
        buffer[bytes] = '\0';
        stash = ft_strjoin(stash, buffer);
        if (!stash)
            return NULL;
    }
    if (!stash || stash[0] == '\0')
        return NULL;
    /* najdi konec řádku */
    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    /* alokuj řádek bez '\n' */
    line = malloc(i + 1);
    if (!line)
        return NULL;
    for (int j = 0; j < i; j++)
        line[j] = stash[j];
    line[i] = '\0';
    /* aktualizuj stash */
    char *new_stash = ft_strdup(stash + i + (stash[i] == '\n'));
    free(stash);
    stash = new_stash;

    return line;
}

/* --- PROCESS CODE --- */

int process_code(char *line, int position)
{
    int i = 1;
    int res = 0;

    while (line[i])
    {
        res = res * 10 + (line[i] - '0');
        i++;
    }
    if (line[0] == 'L')
    {
        position = (position - res) % 100;
        if (position < 0)
            position += 100;
    }
    else if (line[0] == 'R')
    {
        position = (position + res) % 100;
    }
    return position;
}

void handle_line(char *line, int *pos, int *count)
{
    *pos = process_code(line, *pos);
    if (*pos == 0)
        (*count)++;
}

/* --- MAIN --- */

int main(void)
{
    int fd = open("code.txt", O_RDONLY);
    char *line;
    int pos = 50;
    int zero = 0;

    if (fd < 0)
        return 1;

    while ((line = secret_entrance(fd)))
    {
        handle_line(line, &pos, &zero);
        free(line);
    }
    close(fd);
    printf("zero count: %d\n", zero);
    return 0;
}
