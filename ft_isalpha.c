/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:18:07 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 17:18:52 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

    printf("Test 1: '%c' -> %s\n", test1, (bool)ft_isalpha(test1) ? "true" : "false");
    printf("Test 2: '%c' -> %s\n", test2, (bool)ft_isalpha(test2) ? "true" : "false");
    printf("Test 3: '%c' -> %s\n", test3, (bool)ft_isalpha(test3) ? "true" : "false");
    printf("Test 4: '%c' -> %s\n", test4, (bool)ft_isalpha(test4) ? "true" : "false");
    printf("Test 5: '%c' -> %s\n", test5, (bool)ft_isalpha(test5) ? "true" : "false");
    printf("Test 6: '%c' -> %s\n", test6, (bool)ft_isalpha(test6) ? "true" : "false");

    return 0;
}*/
