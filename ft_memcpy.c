/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:13:01 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:22:46 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char dst[] = "aaaaaaaaaa"; // char *dst - bus error
	char src[] = "XXXXXXXOOO";
	size_t i = 3;

	printf("memcpy: %p\tft_memcpy: %p\n", 
	memcpy(dst, src, i), ft_memcpy(dst, src, i));

	char *origin = memcpy(dst, src, i);
	printf("string after memcpy: %s\n", origin);

	char *custom = ft_memcpy(dst, src, i);
	printf("string after ft_memcpy: %s\n", custom);
	return (0);
}
*/
