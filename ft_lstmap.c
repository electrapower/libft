/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:18:29 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:18:39 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

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

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!lst)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

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
		lstiteri = lstiteri->next;
	}
	return (newlst);
}
/*
void	del_content(void *content)
{
	free(content);
}

void	*toupper_wrap(void *content)
{
	char	*str = (char *)content;
	char	*copy = ft_strdup(str);
	size_t	i = 0;

	if (!copy)
		return (NULL);
	while (copy[i])
	{
		copy[i] = ft_toupper(copy[i]);
		i++;
	}
	return (copy);
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	t_list	*list1 = ft_lstnew(ft_strdup("one"));
	t_list	*list2 = ft_lstnew(ft_strdup("two"));
	t_list	*list3 = ft_lstnew(ft_strdup("three"));

	list1->next = list2;
	list2->next = list3;

	t_list *mapped = ft_lstmap(list1, toupper_wrap, del_content);

	t_list *temp = mapped;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&list1, del_content);
	ft_lstclear(&mapped, del_content);
	return (0);
}*/
