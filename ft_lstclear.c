#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*tale;

	if (!lst || !del)
		return ;
	tale = *lst;
	while (tale)
	{	
		head = tale;
		tale = tale->next;
		del(head->content);
		free(head);
	}
	*lst = NULL;
}
