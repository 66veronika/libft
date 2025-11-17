/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:04:06 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/16 17:18:07 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *last;
    last = NULL;
   
    i = 0;
    while (s[i])
    {
        if (s[i] == (unsigned char)c)
        {
            last = ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == (unsigned char)c)
        {
            return ((char *)&s[i]);
        }
    return (last);
}
/*
int main(void)
{
    const char *str = "Hello world!";
    int c = 'l';
    printf("%s\n", ft_strrchr(str, c));
}*/