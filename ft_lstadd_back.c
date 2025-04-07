/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:16:02 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:16:17 by asalniko         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("first");
	t_list *node2 = ft_lstnew("second");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);

	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}

	return (0);
}*/
