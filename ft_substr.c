/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:32:22 by veronikasko       #+#    #+#             */
/*   Updated: 2025/11/19 13:54:26 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	
	if (!s)
		return (NULL);
	while(s[start] < (start + len))
	{
		subs = malloc(len);
		subs = (unsigned char *)s;
		start++;		
	}
	if (!subs)
		return (NULL);
	return (subs);
	
}

int main(void)
{
	int start = 3;
	size_t	len = 5;
	char *subs = ft_substr("hello world", start, len);

	if (!subs)
	{
		printf("calloc selhala\n");
		return (1);
	}

	printf ("reult: %s", subs);
	  

	printf("\n");

	free(subs);
	return 0;
}