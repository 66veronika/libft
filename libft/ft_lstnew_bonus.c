/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:39:22 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 18:12:43 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main(void)
{
    t_list *node1 = ft_lstnew("hi");
    t_list *node2 = ft_lstnew("hello");
    t_list *node3 = ft_lstnew("Hola");

    node1->next = node2;
    node2->next = node3;

    t_list *current = node1;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // uvolnění paměti
    current = node1;
    t_list *tmp;
    while (current != NULL)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }

    return 0;
}*/