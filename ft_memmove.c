/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:38:20 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/12 20:38:39 by asalniko         ###   ########.fr       */
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

int main(void)
{
    // test1 - // space in enough
    char src1[] = "Hello, World!";
    char dst1[20] = {0};
    printf("Before ft_memmove (non-overlapping): src = \"%s\", dst = \"%s\"\n", src1, dst1);
    ft_memmove(dst1, src1, 13); // copy 13 bytes (including \0)
    printf("After ft_memmove (non-overlapping): src = \"%s\", dst = \"%s\"\n\n", src1, dst1);

    // test2: overlap (src < dst)
    char buffer2[] = "1234567890";
    printf("Before ft_memmove (overlapping): buffer = \"%s\"\n", buffer2);
    ft_memmove(buffer2 + 3, buffer2, 6); // copy "123456" inside buffer + 3
    printf("After ft_memmove (overlapping): buffer = \"%s\"\n\n", buffer2);

    // test3: overlap (dst < src)
    char buffer3[] = "1234567890";
    printf("Before ft_memmove (overlapping): buffer = \"%s\"\n", buffer3);
    ft_memmove(buffer3, buffer3 + 3, 6); // copy "456789" inside buffer
    printf("After ft_memmove (overlapping): buffer = \"%s\"\n\n", buffer3);

    // test4: zero-length copy
    char src4[] = "Source";
    char dst4[] = "Destination";
    printf("Before ft_memmove (zero-length): src = \"%s\", dst = \"%s\"\n", src4, dst4);
    ft_memmove(dst4, src4, 0); // nothing to copy
    printf("After ft_memmove (zero-length): src = \"%s\", dst = \"%s\"\n\n", src4, dst4);

    // test5: src == dst (nothing is happening here)
    char buffer5[] = "Same memory";
    printf("Before ft_memmove (same memory): buffer = \"%s\"\n", buffer5);
    ft_memmove(buffer5, buffer5, 11); // src == dst
    printf("After ft_memmove (same memory): buffer = \"%s\"\n", buffer5);

    return 0;
}
*/