/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:32:34 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/18 14:24:02 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	res;

	if (nmemb == 0 || size == 0)
    return malloc(0);
	res = nmemb * size;
	p = malloc(res);
	if (!p)
		return (NULL);
	ft_bzero(p, res);
	return (p);
}
/*
int main(void)
{
	int *arr = ft_calloc(4, sizeof(int));

	if (!arr)
	{
		printf("calloc selhala\n");
		return (1);
	}

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);   

	printf("\n");

	free(arr);
	return 0;
}*/