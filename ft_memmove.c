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
