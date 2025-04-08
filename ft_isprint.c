/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:28 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:21:52 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("Test: 'a'\tisprint(: %d\tft_isprint: %d\n", 
	isprint('a'), ft_isprint('a'));
	printf("Test: '0'\tisprint(: %d\tft_isprint: %d\n", 
	isprint('0'), ft_isprint('0'));
	printf("Test: '\t'\tisprint(: %d\tft_isprint: %d\n", 
	isprint('\t'), ft_isprint('\t'));
	printf("Test: -1\tisprint(: %d\tft_isprint: %d\n", 
	isprint(-1), ft_isprint(-1));
	printf("Test: 256\tisprint(: %d\tft_isprint: %d\n", 
	isprint(256), ft_isprint(256));
	return (0);
}
*/