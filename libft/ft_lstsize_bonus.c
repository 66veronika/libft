/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:51:14 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 17:30:03 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while(lst)
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