/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:08:13 by veronikasko       #+#    #+#             */
/*   Updated: 2026/01/09 19:43:36 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
int format_type(char c, va_list args);
int	ft_putchar(char c);
int ft_puthex(unsigned long n, char *hex);
int	ft_putnbr(int n);
int	ft_putptr(void *ptr);
int ft_putstr(char *s);
int	ft_putunsigned(unsigned int n);

# endif