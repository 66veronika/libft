/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:07:26 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/27 00:43:58 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char	*word_copy(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	len = word_len(s, c);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	skip_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i += skip_c(s + i, c);
		if (s[i])
		{
			split[j] = word_copy(s + i, c);
			if (!split[j])
				return (NULL);
			i += word_len(s + i, c);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
/*
int	main(void)
{
	char	**split = ft_split("Hello world hi!", ' ');
	int		i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
	return (0);
}*/