/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:01:29 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/15 19:43:10 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		*str = 0;
		i++;
	}
}
/*
int main(void)
{
	size_t i = 0;
	char str[20] = "Hello!";
	
	ft_bzero(str, 3);

	while (i < 6)
	printf("%s\n", str);
	return 0;
}*/