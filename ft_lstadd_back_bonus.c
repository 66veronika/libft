/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:12:28 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 17:36:06 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	
	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		current = *lst;
		while(current->next)
			current = current->next;
		current->next = new;
	}
}
/*
int main(void)
{
    t_list *list;
	list = NULL;

    t_list *a = ft_lstnew("hi");
    t_list *b = ft_lstnew("hello");
    t_list *c = ft_lstnew("Hola");

    ft_lstadd_back(&list, a);
    ft_lstadd_back(&list, b);
    ft_lstadd_back(&list, c);

    t_list *current;
	current = list;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");
	
	current = list;
    t_list *tmp;
    while (current)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }

    return 0;
}*/
