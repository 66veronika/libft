/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:10:50 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/17 16:27:04 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
    char dest[20];

    printf("return = %zu\n", ft_strlcpy(dest, "Abcdefgh", sizeof(dest)));
    printf("dest = %s\n", dest);

    printf("return = %zu\n", ft_strlcpy(dest, "Hello", 3));
    printf("dest = %s\n", dest);

    return 0;
}*/
