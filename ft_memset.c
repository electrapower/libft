/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:05:41 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/04 16:38:16 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *)b)[len] = (unsigned char)c;
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[20] = "hello, world!";
	ft_memset(str, '*', 5);
	printf("result: %s\n", str);  // expected: ***** world!
	return (0);
}
*/
