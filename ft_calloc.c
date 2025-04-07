/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:02:20 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:20:42 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdint.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*
#include <stdio.h>

int	main(void)

{
	int	amount = 5;
	int *ptr = (int *)ft_calloc(amount, sizeof(int));
	int	i = 0;
	
	while (i < amount)
		printf("%d ", ptr[i++]);
	printf("\n");
	free(ptr);
	return (0);
}*/
