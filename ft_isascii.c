/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:19:28 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:21:26 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("Test: 'a'\tOriginal: %d\tMy function: %d\n", 
	isascii('a'), ft_isascii('a'));
	printf("Test: 'z'\tOriginal: %d\tMy function: %d\n", 
	isascii('z'), ft_isascii('z'));
	printf("Test: '0'\tOriginal: %d\tMy function: %d\n", 
	isascii('0'), ft_isascii('0'));
	printf("Test: '\t'\tOriginal: %d\tMy function: %d\n", 
	isascii('\t'), ft_isascii('\t'));
	printf("Test: -1\tOriginal: %d\tMy function: %d\n", 
	isascii(-1), ft_isascii(-1));
	printf("Test: 256\tOriginal: %d\tMy function: %d\n", 
	isascii(256), ft_isascii(256));
	return (0);
}
*/