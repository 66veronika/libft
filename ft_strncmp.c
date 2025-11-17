/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:19:53 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/17 13:06:39 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    i = 0;

    if (n == 0)
		return (0);
    while ((i < n - 1) && s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
    char    s1[] = "heldo";
    char    s2[] = "helb";
    printf("string 1: %s\n", s1);
    printf("string 2: %s\n", s2);
    printf("%d\n",ft_strncmp(s1, s2, 4));
    return 0;
}
*/