/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:28 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/12 18:38:02 by asalniko         ###   ########.fr       */
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
#include <stdio.h>
#include <stdbool.h> 

int main(void)
{
    char test1 = 'A';
    char test2 = 'z';
    char test3 = ' ';
    char test4 = '~';
    char test5 = 31; // non-printable
    char test6 = 127; // non-printable
    char test7 = '@';

    printf("Test 1: '%c' -> %s\n", test1, (bool)ft_isprint(test1) ? "true" : "false");
    printf("Test 2: '%c' -> %s\n", test2, (bool)ft_isprint(test2) ? "true" : "false");
    printf("Test 3: '%c' -> %s\n", test3, (bool)ft_isprint(test3) ? "true" : "false");
    printf("Test 4: '%c' -> %s\n", test4, (bool)ft_isprint(test4) ? "true" : "false");
    printf("Test 5: '%c' -> %s\n", test5, (bool)ft_isprint(test5) ? "true" : "false");
    printf("Test 6: '%c' -> %s\n", test6, (bool)ft_isprint(test6) ? "true" : "false");
    printf("Test 7: '%c' -> %s\n", test7, (bool)ft_isprint(test7) ? "true" : "false");

    return 0;
}*/

