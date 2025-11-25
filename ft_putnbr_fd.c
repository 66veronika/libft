/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 00:44:47 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/25 01:29:30 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
/*
int main(void)
{
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(-12345, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);

    return 0;
}*/