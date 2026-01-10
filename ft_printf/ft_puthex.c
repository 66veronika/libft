/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:10:13 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/09 14:41:53 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned long n, char *hex)
{
    int count;
	
	count = 0;
    if (n >= 16)
        count += ft_puthex(n / 16, hex);
    count += write(1, &hex[n % 16], 1);
    return (count);
}
