/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:51:14 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 18:12:33 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *node1 = ft_lstnew("hi");
    t_list *node2 = ft_lstnew("hello");
    t_list *node3 = ft_lstnew("Hola");

	node1->next = node2;
    node2->next = node3;

	printf("%d\n", ft_lstsize(node1));
	return (0);
}*/