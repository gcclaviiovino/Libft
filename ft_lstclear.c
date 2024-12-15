/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:26:39 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 15:26:40 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

/*
void    del(void *content) // solo per provare DA LEVARE!!
{
    free(content);
}*/

/*
void    print_list(t_list *lst) // solo per stampare DA LEVARE!!
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;
	t_list	*next_n;

	to_del = *lst;
	if (!lst || !del)
		return ;
	while (to_del != NULL)
	{
		next_n = to_del->next;
		ft_lstdelone(to_del, del);
		to_del = next_n;
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = strdup("First");
	node1->next = node2;

	node2->content = strdup("Second");
	node2->next = node3;

	node3->content = strdup("Third");
	node3->next = NULL;

	printf("Lista prima:\n");
	print_list(node1);
	ft_lstclear(&node1, del);
	printf("Lista dopo:\n");
	print_list(node1);
}*/