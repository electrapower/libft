/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:05:41 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/12 20:06:01 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *) b;
	while (i < len)
	{
		result[i] = c;
		i++;
	}
	return (b);
}
