/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:36:59 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 17:37:15 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = 0;
	src_len = 0;
	while (dst[dest_len] != '\0' && dest_len < dstsize)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 15;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Resulting string: %s\n", dest);  
    printf("Total length: %u\n", result); 

    return 0;
}*/
