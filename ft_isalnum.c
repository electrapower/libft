/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:35:53 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/12 18:39:15 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <stdbool.h> 

int main(void)
{
    char test1 = 'A';
    char test2 = 'z';
    char test3 = '5';
    char test4 = '@';
    char test5 = ' ';
    char test6 = 127;   // ASCII 127 (DEL)

    printf("Test 1: '%c' -> %s\n", test1, (bool)ft_isalnum(test1) ? "true" : "false");
    printf("Test 2: '%c' -> %s\n", test2, (bool)ft_isalnum(test2) ? "true" : "false");
    printf("Test 3: '%c' -> %s\n", test3, (bool)ft_isalnum(test3) ? "true" : "false");
    printf("Test 4: '%c' -> %s\n", test4, (bool)ft_isalnum(test4) ? "true" : "false");
    printf("Test 5: '%c' -> %s\n", test5, (bool)ft_isalnum(test5) ? "true" : "false");
    printf("Test 6: '%c' -> %s\n", test6, (bool)ft_isalnum(test6) ? "true" : "false");

    return 0;
}*/