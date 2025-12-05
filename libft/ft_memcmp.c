/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:09:01 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/18 18:30:41 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	*s;

	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while ((i < n))
	{
		if (s[i] != f[i])
			return (f[i] - s[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char    s1[] = "heldo";
    char    s2[] = "helb";
    printf("string 1: %s\n", s1);
    printf("string 2: %s\n", s2);
    printf("%d\n",ft_memcmp(s1, s2, 4));
    return 0;
}*/