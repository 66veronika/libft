/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:10:13 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/11 18:03:16 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char *hex)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, hex);
	count += write(1, &hex[n % 16], 1);
	return (count);
}
