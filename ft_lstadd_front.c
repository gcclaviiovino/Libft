#include "libft.h"
//#include <stdio.h>

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