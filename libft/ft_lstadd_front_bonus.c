/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:32:01 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 17:35:57 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list *list;
	list = NULL;

    t_list *a = ft_lstnew("hi");
    t_list *b = ft_lstnew("hello");
    t_list *c = ft_lstnew("Hola");

    ft_lstadd_front(&list, a);
    ft_lstadd_front(&list, b);
	ft_lstadd_front(&list, c);

    t_list *current;
	current = list;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}*/
/*
int main(void)
{
    t_list *list = NULL;
    
    int *x = malloc(sizeof(int));
    *x = 10;
    t_list *a = ft_lstnew(x);

    int *y = malloc(sizeof(int));
    *y = 20;
    t_list *b = ft_lstnew(y);

    ft_lstadd_front(&list, a);
    ft_lstadd_front(&list, b);

	t_list *cur;
	cur = list;
    while (cur)
	{
		printf("%d -> ", *(int *)cur->content);
		cur = cur->next;
	}
    printf("NULL\n");
	
	cur = list;
    t_list *tmp;
    while (cur)
    {
        tmp = cur->next;
        free(cur->content);
        free(cur);
        cur = tmp;
    }

    return 0;
}*/