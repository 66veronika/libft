/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:41:03 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/17 18:22:50 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char big[] = "hello world";
	const char little2[] = "lo";
	const char little3[] = "xyz";
	const char little4[] = "";

	printf("Test 2: hledám \"%s\" v \"%s\" (len = 5)\n", little2, big);
    printf("Výsledek: %s\n\n", ft_strnstr(big, little2, 5));
	return 0;
}*/