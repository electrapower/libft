#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	test_list_functions(void)
{
	int		tab[20];
	int		i;
	t_list	*begin;

	*tab = 0;
	begin = ft_lstnew(tab);
    printf("\n\n=========== TESTING LSTADD_FRONT  ============\n\n");
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("Should print numbers from 9 to 0.\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
}