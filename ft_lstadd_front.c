/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:16:35 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 17:53:03 by asalniko         ###   ########.fr       */
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	t_list *n1 = ft_lstnew("second");
	t_list *n2 = ft_lstnew("first");

	ft_lstadd_front(&n1, n2);

	t_list *temp = n2;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	t_list *current = n2;
	t_list *next;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	return (0);
}*/
