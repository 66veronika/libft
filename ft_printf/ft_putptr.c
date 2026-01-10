/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:20:21 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/09 19:41:30 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int				count;

	count = 0;
	addr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	if (addr == 0)
		count += write(1, "0", 1);
	else
		count += ft_puthex(addr, "0123456789abcdef");
	return (count);
}
