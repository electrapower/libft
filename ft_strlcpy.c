/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:31:27 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:34:27 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char dst[20] = "oooooooooo";
	char src[] = "XXXXXXXOOO";
	size_t n = 3;

	size_t custom = ft_strlcpy(dst, src, n);

	printf("ft_strlcpy: %s (%zu)\n", dst, custom);
	return (0);
}
*/
