/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:44:40 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/02 18:08:27 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

/*
void delete_content(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *list = ft_lstnew(strdup("hi"));
    t_list *b = ft_lstnew(strdup("hello"));
    t_list *c = ft_lstnew(strdup("Hola"));

    list->next = b;
    b->next = c;

    printf("Původní list:\n");
    print_list(list);

    // smažeme první uzel
    ft_lstdelone(list, delete_content);
    list = b; // aktualizujeme začátek listu

    printf("Po odstranění prvního uzlu:\n");
    print_list(list);

    // smažeme zbytek listu
    ft_lstdelone(b, delete_content);
    ft_lstdelone(c, delete_content);

    return 0;
}*/