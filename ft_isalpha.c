/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:46:58 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/11 13:47:53 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalpha(int c)
{
	if (c <= 'a' || c >= 'z' && c <= 'A' || c >= 'Z')
		return (1);
	return (0);
}

/*
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	char *str = "Hello123";
	int i = 0;

	while (str[i])
	{
		if (ft_isalpha(str[i]))
			printf("%c is a letter\n", str[i]);
		else
			printf("%c is NOT a letter\n", str[i]);
		i++;
	}
	return (0);
}*/