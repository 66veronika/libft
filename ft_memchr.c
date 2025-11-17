/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:04:19 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/17 14:07:26 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
    		return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *str = "Hello world!";
    size_t c = 'o';
    printf("%s\n", (char *)ft_memchr(str, c, 2));
}*/