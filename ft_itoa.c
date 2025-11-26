/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 01:13:10 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/26 17:28:22 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
static void	convert(long num, char *res, int len)
{
	if (num == 0)
	{
		res[0] = '0';
		return ;
	}
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		res[--len] = (num % 10) + '0';
		num /= 10;
	}
}
char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		len;

	num = n;
	len = n_len(num);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0'; 
	convert(num, res, len);
	return (res);
}

/*
int main(void)
{
    int nums[] = {0, 5, -5, 42, -42, 12345, -2147483648};
    int i = 0;

    while (i < 7)
    {
        char *s = ft_itoa(nums[i]);
        printf("ft_itoa(%d) = %s\n", nums[i], s);
        free(s);
        i++;
    }
    return 0;
}*/