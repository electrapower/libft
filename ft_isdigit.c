/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:00:38 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:21:40 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("Test: 'a'\tOriginal: %d\tMy function: %d\n", 
	isdigit('a'), ft_isdigit('a'));
	printf("Test: '0'\tOriginal: %d\tMy function: %d\n", 
	isdigit('0'), ft_isdigit('0'));
	printf("Test: '\t'\tOriginal: %d\tMy function: %d\n", 
	isdigit('\t'), ft_isdigit('\t'));
	printf("Test: 256\tOriginal: %d\tMy function: %d\n", 
	isdigit(256), ft_isdigit(256));
	return (0);
}
*/