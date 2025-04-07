/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:18:12 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:18:23 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
#include <stdio.h>
#include <stdlib.h>

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

int	main(void)
{
	t_list *node1 = ft_lstnew("first");
	t_list *node2 = ft_lstnew("second");
	t_list *node3 = ft_lstnew("last");

	node1->next = node2;
	node2->next = node3;

	t_list *last = ft_lstlast(node1);

	if (last)
		printf("Last content: %s\n", (char *)last->content);
	else
		printf("List is empty.\n");

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
