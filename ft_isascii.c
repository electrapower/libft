/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:19:28 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 17:19:44 by asalniko         ###   ########.fr       */
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
#include <stdio.h>
#include <stdbool.h> 

int main(void)
{
    char test1 = 'A';
    char test2 = -1; // not ASCII
    char test3 = '5';
    char test4 = '@';
    char test5 = ' ';
    char test6 = 127;   // ASCII 127 (DEL)
	char test7 = 129;   // out of ASCII

    printf("Test 1: '%c' -> %s\n", test1, (bool)ft_isascii(test1) ? "true" : "false");
    printf("Test 2: '%c' -> %s\n", test2, (bool)ft_isascii(test2) ? "true" : "false");
    printf("Test 3: '%c' -> %s\n", test3, (bool)ft_isascii(test3) ? "true" : "false");
    printf("Test 4: '%c' -> %s\n", test4, (bool)ft_isascii(test4) ? "true" : "false");
    printf("Test 5: '%c' -> %s\n", test5, (bool)ft_isascii(test5) ? "true" : "false");
    printf("Test 6: '%c' -> %s\n", test6, (bool)ft_isascii(test6) ? "true" : "false");
	printf("Test 7: '%c' -> %s\n", test7, (bool)ft_isascii(test7) ? "true" : "false");

    return 0;
}*/