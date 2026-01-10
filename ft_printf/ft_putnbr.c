/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:20:24 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/09 19:25:11 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbr(int n)
{
		int	count;

		count = 0;
		if (n == -2147483648)
		{
			return (write(1, "-2147483648", 11));
		}
		if (n < 0)
		{
			count += ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
			count += ft_putnbr(n / 10);
		count += ft_putchar((n % 10) + '0');
		return (count);
}
