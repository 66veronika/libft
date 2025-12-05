#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	process_code(char *line, int position);

void	read_code_file(const char *filename, int *position, int *zero_count)
{
	int	fd;
	int	line_len;
	ssize_t	bytes_read;
	char	buffer[256];
	char	line[20];
	int		i;
	
	line_len = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return ;
	}
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
		if (buffer[i] == '\n')
		{
			line[line_len] = '\0';
			*position = process_code(line, *position);
    		if (*position == 0)
       			(*zero_count)++;
			line_len = 0;
		}
		else
		{
			if (line_len < sizeof(line) - 1) 
				line[line_len++] = buffer[i];
		}
		i++;
		}
	}
	if (bytes_read == -1)
        perror("read");

    close(fd);
}

int	process_code(char *line, int position)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while(line[i])
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
	return (position);
}

int	main(void)
{
	int	position;
	int	zero_count;

	zero_count = 0;
	position = 50;
	read_code_file("code.txt", &position, &zero_count);
	printf("zero count: %d\n", zero_count);
	return (0);
}