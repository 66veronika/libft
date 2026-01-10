#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char *str = "hi";

	ft_printf(" %c %c %c\n ", '0', 0, '1');
	printf(" %c %c %c ", '0', 0, '1');

	ft_putchar(0);
	
}