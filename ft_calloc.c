/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:32:34 by vskopova          #+#    #+#             */
/*   Updated: 2025/12/01 13:08:06 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	res;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > INT_MAX / size)
		return (NULL);
	if ((int)nmemb < 0 || (int)size < 0)
		return (NULL);
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