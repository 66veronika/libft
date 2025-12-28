/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:55:00 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/27 21:19:36 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if (!s2)
		return (NULL);
	if (!s1)
		s1 = "";
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		nstr[i + j] = s2[j];
		j++;
	}
	nstr[i + j] = '\0';
	return (nstr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while(s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char*)&s[i]);
		i++;
	}
	if(s[i] == (unsigned char)c)
		return ((char*)&s[i]);
	return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while(s[len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if(!dest)
		return (NULL);
	i = 0;
	while(i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

