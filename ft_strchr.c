/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:17:36 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/16 17:20:51 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i])
    {
        if (s[i] == (unsigned char)c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == (unsigned char)c)
        {
            return ((char *)&s[i]);
        }
    return (NULL);
}
/*
int main(void)
{
    const char *str = "Hello world!";
    int c = 'l';
    printf("%s\n", ft_strchr(str, c));
}*/