/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:04:33 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:20:13 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((int)*str - '0');
		str++;
	}
	return (num * sign);
}
/*
#include <stdio.h>

int main(void)
{
    char *test1 = "42";
    char *test2 = "   -123";
    char *test3 = "+456";
    char *test4 = "   +78abc"; // expecting: 78
    char *test5 = "   -+42";   // logic error
	char *test6 = "2147483647"; // max int
    char *test7 = "-2147483648"; // min int
    char *test8 = "abcd";       // expecting: 0

    // results
    printf("Test 1: %s -> %d\n", test1, ft_atoi(test1));
    printf("Test 2: %s -> %d\n", test2, ft_atoi(test2));
    printf("Test 3: %s -> %d\n", test3, ft_atoi(test3));
    printf("Test 4: %s -> %d\n", test4, ft_atoi(test4));
    printf("Test 5: %s -> %d\n", test5, ft_atoi(test5));
    printf("Test 6: %s -> %d\n", test6, ft_atoi(test6));
    printf("Test 7: %s -> %d\n", test7, ft_atoi(test7));
    printf("Test 8: %s -> %d\n", test8, ft_atoi(test8));

    return (0);
}*/
