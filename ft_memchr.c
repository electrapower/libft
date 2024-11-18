/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:59:53 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 17:07:15 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, World!";
    char target1 = 'W';
    char target2 = 'z';
    char target3 = ',';
    char target4 = '\0';

    size_t n = strlen(str);

	// test1
    char *result1 = ft_memchr(str, target1, n);
    if (result1)
        printf("Test 1: Found '%c' at position: %ld\n", target1, result1 - str);
    else
        printf("Test 1: '%c' not found\n", target1);

    // test2
    char *result2 = ft_memchr(str, target2, n);
    if (result2)
        printf("Test 2: Found '%c' at position: %ld\n", target2, result2 - str);
    else
        printf("Test 2: '%c' not found\n", target2);

    // test3
    char *result3 = ft_memchr(str, target3, n);
    if (result3)
        printf("Test 3: Found '%c' at position: %ld\n", target3, result3 - str);
    else
        printf("Test 3: '%c' not found\n", target3);

    // test4
    char *result4 = ft_memchr(str, target4, n + 1);
    if (result4)
        printf("Test 4: Found '\\0' at position: %ld\n", result4 - str);
    else
        printf("Test 4: '\\0' not found\n");

    return 0;
}*/