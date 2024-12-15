#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstdelone(new_node, del);
			return (NULL);
		}
		ft_lstadd_front(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
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
	ft_lstmap(node1, (void *)f, del);
	printf("Lista dopo:\n");
	print_list(node1);
}*/