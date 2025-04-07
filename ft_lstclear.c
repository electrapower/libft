/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:17:16 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 17:54:13 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdlib.h>
#include <stdio.h>

void	del_content(void *content)
{
	free(content);
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

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

int	main(void)
{
	t_list	*node1 = ft_lstnew(ft_strdup("one"));
	t_list	*node2 = ft_lstnew(ft_strdup("two"));
	t_list	*node3 = ft_lstnew(ft_strdup("three"));

	node1->next = node2;
	node2->next = node3;

	printf("Before clear:\n");
	t_list *temp = node1;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&node1, del_content);

	if (!node1)
		printf("After clear: list is empty\n");

	return (0);
}*/
