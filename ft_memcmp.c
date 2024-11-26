/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:03:25 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 16:59:05 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]
		&& i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "abcdef";
    char str3[] = "abcdeg";
    char str4[] = "abc";
    char str5[] = "abc\0def";

	// test1 full
    printf("Test 1: Comparing \"%s\" and \"%s\" -> %d\n", str1, str2,
    ft_memcmp(str1, str2, 6));
    // expecting: 0 (identical strs)

    // test2 diff in last symb
    printf("Test 2: Comparing \"%s\" and \"%s\" -> %d\n", str1, str3,
    ft_memcmp(str1, str3, 6));
    // expecting: negative ('f' is less than 'g')

    // test3 cmp only a part of str
    printf("Test 3: Comparing \"%s\" and \"%s\" -> %d\n", str1, str4,
    ft_memcmp(str1, str4, 3));
    // expecting: 0 (first 3 are the same)

    // test4 cmp nothing
    printf("Test 4: Comparing \"%s\" and \"%s\" -> %d\n", str1, str3,
    ft_memcmp(str1, str3, 0));
    // expecting: 0 (nothing is comparing)

    // test 5: compare str with '\0' inside
    printf("Test 5: Comparing \"%s\" and \"%s\" -> %d\n", str1, str5,
    ft_memcmp(str1, str5, 6));
    // expecting: positive number 

    return (0);
}*/