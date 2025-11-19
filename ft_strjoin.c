/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:51:43 by vskopova          #+#    #+#             */
/*   Updated: 2025/11/19 16:58:00 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	
	if (!s1 || !s2)
		return (NULL);
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (!nstr)
		return (NULL);
	
}