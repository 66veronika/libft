/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:01:27 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/17 13:51:39 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main(void)
{
	char str[20] = "Hello, world!";

	ft_memset(str, 'A', 5);

	printf("%s\n", str);
	return 0;
}*/