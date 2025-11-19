/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:48:01 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/19 17:00:48 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	j = dest_len;
	i = 0;
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	while (src[i] && (j + 1) < dstsize)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dest_len + src_len);
}

/*
int main(void)
{
    char dest[6] = "Hello ";
    char src[] = "world";
    
    printf("lenght: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
    printf("new dest: %s\n", dest);
}*/