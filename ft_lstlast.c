#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;
	int	len;
	int	i;

	i = 0;
	len = ft_lstsize(lst);
	while ((i + 1) < len)
	{
		lst = lst->next;
		i ++;
	}
	last = lst;
	return (last);
}
/*
int	main(void) // main di merda.
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = "First";
	node1->next = node2;

	node2->content = "Second";
	node2->next = node3;

	node3->content = "Third";
	node3->next = NULL;

	// Find and print the last node
	t_list *last = ft_lstlast(node1);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
}*/