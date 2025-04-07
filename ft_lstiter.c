/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:17:54 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:18:04 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
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

void	print_content(void *content)
{
	printf("Node: %s\n", (char *)content);
}

int	main(void)
{
	t_list *n1 = ft_lstnew("one");
	t_list *n2 = ft_lstnew("two");
	t_list *n3 = ft_lstnew("three");

	n1->next = n2;
	n2->next = n3;

	ft_lstiter(n1, print_content);

	free(n1);
	free(n2);
	free(n3);

	return (0);
}*/
