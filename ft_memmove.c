/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:38:20 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:23:00 by asalniko         ###   ########.fr       */
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

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*char_dst;
	unsigned char	*char_src;

	if (dst == src)
		return (dst);
	char_dst = dst;
	char_src = (unsigned char *) src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len--)
		char_dst[len] = char_src[len];
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "123456789";
	char str2[] = "123456789";

	ft_memmove(str1 + 4, str1 + 2, 5);
	memmove(str2 + 4, str2 + 2, 5);

	printf("ft_memmove: %s\n", str1);
	printf("memmove:    %s\n", str2);

	return (0);
}*/
