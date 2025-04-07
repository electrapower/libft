/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:59:53 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/07 21:15:34 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Liebe Freunde";
	printf("memchr: %p\t ft_memchr: %p\n", 
	memchr(str, 'b', 4), ft_memchr(str, 'b', 4));
	printf("memchr: %p\t\t ft_memchr: %p\n", 
	memchr(str, 'b', 3), ft_memchr(str, 'b', 3));
	printf("memchr: %p\t ft_memchr: %p\n", 
	memchr(str, 'L', 100), ft_memchr(str, 'L', 100));
	return (0);
}
*/
