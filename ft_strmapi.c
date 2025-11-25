/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:20:30 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/24 22:04:36 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*nst;
	
	if (!s)
		return (NULL);
	nst = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!nst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		nst[i] = f(i, s[i]);
		i++;
	}
	return (nst);
}
/*
int main(void)
{
    char const *s = "hello world";
    char *new_str;

    new_str = function;
    if (!new_str)
    {
        printf("malloc selhal\n");
        return 1;
    }

    printf("puvodni string: %s\n", s);
    printf("novy string:    %s\n", new_str);

    free(new_str);
    return 0;
}*/