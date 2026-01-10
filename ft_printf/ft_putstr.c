/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:52:33 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/08 13:16:39 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *s)
{
	int i = 0;

	if (!s)
		return (write(1, "(null)", 6));

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return i;
}
