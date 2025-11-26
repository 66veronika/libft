/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:07:26 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/26 23:59:11 by vskopova         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;
	int		w_len;
	
	split = malloc((word_count(s, c) + 1)* sizeof(char *));
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		w_len = word_len(s + i, c);
		split[j] = malloc(w_len + 1);
		if (!split[j])
			return (NULL);
		k = 0;
		while (k < w_len)
		{
			split[j][k] = s[i + k];
			k++;
		}
		split[j][w_len] = '\0';
		i += w_len;
		j++;
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