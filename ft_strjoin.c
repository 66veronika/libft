/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:51:43 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/25 01:25:33 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstr[i + j] = s2[j];
		j++;
	}
	nstr[i + j] = '\0';
	return (nstr);
}
/*
int main(void)
{
    char *s1 = "Hello ";
    char *s2 = "world!";
    char *nstr = ft_strjoin(s1, s2);

    if (!nstr)
    {
        printf("Allocation failed\n");
        return (1);
    }

    printf("Result: %s\n", nstr);

    free(nstr);
    return 0;
}*/