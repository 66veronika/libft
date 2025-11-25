/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:43:30 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/24 21:17:05 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nst;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	new_len;
	
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && is_set(s1[i], set))
	{
		i++;
	}
	if (i == len)
    return (ft_strdup(""));
	j = len - 1;
	while ((j > i) && s1[j] && is_set(s1[j], set))
	{
		j--;
	}
	new_len = j - i + 1;
	nst = ft_substr(s1, i, new_len);
	return (nst);
}
/*
int	main(void)
{
	char const *s1 = "xaxaHelloxaxa";
	char const *set = "xa";
	
	printf("new string: %s", ft_strtrim(s1, set));
	return (0);
}*/