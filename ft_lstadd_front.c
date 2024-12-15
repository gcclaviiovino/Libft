/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:26:24 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 15:26:27 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	printf("%p\n", lst);
	new->next = *lst;
	lst = &new;
	printf("%p\n", lst);
}
/*
int	main(void)
{
	t_list **lst;
	t_list *new;

	lst = (t_list **) malloc(sizeof(t_list));
	new = (t_list *) malloc(sizeof(t_list));
	ft_lstadd_front(lst, new);
}*/