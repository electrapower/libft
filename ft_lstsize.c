/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:19:10 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:19:22 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
/*
#include <stdio.h>

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
	t_list *a = ft_lstnew("one");
	t_list *b = ft_lstnew("two");
	t_list *c = ft_lstnew("three");

	a->next = b;
	b->next = c;

	printf("List size: %d\n", ft_lstsize(a));

	free(a);
	free(b);
	free(c);

	return (0);
}
*/
