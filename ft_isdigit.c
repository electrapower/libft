/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:00:38 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 18:05:52 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <stdbool.h> 

int main(void)
{
    char test1 = '33';
    char test2 = 'z';
    char test3 = '5';
    char test4 = '@';
    char test5 = ' ';
    char test6 = 127;   // ASCII 127 (DEL)

    printf("Test 1: '%c' -> %s\n", test1, (bool)ft_isdigit(test1) ? "true" : "false");
    printf("Test 2: '%c' -> %s\n", test2, (bool)ft_isdigit(test2) ? "true" : "false");
    printf("Test 3: '%c' -> %s\n", test3, (bool)ft_isdigit(test3) ? "true" : "false");
    printf("Test 4: '%c' -> %s\n", test4, (bool)ft_isdigit(test4) ? "true" : "false");
    printf("Test 5: '%c' -> %s\n", test5, (bool)ft_isdigit(test5) ? "true" : "false");
    printf("Test 6: '%c' -> %s\n", test6, (bool)ft_isdigit(test6) ? "true" : "false");

    return 0;
}*/