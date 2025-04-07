/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:03:25 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:22:28 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]
		&& i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	printf("test: (ABCD, ABDD, 3)\tmemcmp: %d\t, ft_memcmp: %d\n", 
	memcmp("ABCD", "ABDD", 3), ft_memcmp("ABCD", "ABDD", 3));
	printf("test: (ABCD, ABCY, 3)\tmemcmp: %d\t, ft_memcmp: %d\n", 
	memcmp("ABCD", "ABCY", 3), ft_memcmp("ABCD", "ABCY", 3));
	printf("test: (ABDD, ABCD, 3)\tmemcmp: %d\t, ft_memcmp: %d\n", 
	memcmp("ABDD", "ABCD", 3), ft_memcmp("ABDD", "ABCD", 3));
	return (0);
}
*/
