#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;
	t_list	*lstiteri;

	newlst = NULL;
	lstiteri = lst;
	while (lstiteri)
	{
		new = ft_lstnew(f(lstiteri->content));
		if (!new)
		{
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		ft_lstadd_back(&newlst, new);
		lstiteri = lstiteri -> next;
	}
	return (newlst);
}