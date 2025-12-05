/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:52:40 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 17:29:50 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while(lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list *node1 = ft_lstnew("hi");
    t_list *node2 = ft_lstnew("hello");
    t_list *node3 = ft_lstnew("Hola");

	node1->next = node2;
    node2->next = node3;

	printf("%s\n", (char *)ft_lstlast(node1)->content);
	return (0);
}*/