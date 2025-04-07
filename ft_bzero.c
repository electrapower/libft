/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:06:50 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:20:29 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = 0;
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char test1[10] = "abcdefghi";
    char test2[10] = "123456789";

    // before ft_bzero
    printf("Before ft_bzero:\n");
    printf("test1: [%s]\n", test1);
    printf("test2: [%s]\n", test2);

    // calling ft_bzero
    ft_bzero(test1, 5); // first 5 bytes
    ft_bzero(test2, 3); // first 3 bytes

    // after ft_bzero
    printf("\nAfter ft_bzero:\n");

    // checking first 5 bytes
    printf("test1 (first 5 bytes): [%c][%c][%c][%c][%c]\n", 
        test1[0] ? test1[0] : '.', 
        test1[1] ? test1[1] : '.', 
        test1[2] ? test1[2] : '.', 
        test1[3] ? test1[3] : '.', 
        test1[4] ? test1[4] : '.');
    
    printf("test2 (first 3 bytes): [%c][%c][%c]\n", 
        test2[0] ? test2[0] : '.', 
        test2[1] ? test2[1] : '.', 
        test2[2] ? test2[2] : '.');

    // checking the rest
    printf("Remaining bytes in test1: [%s]\n", &test1[5]);
    printf("Remaining bytes in test2: [%s]\n", &test2[3]);

    return (0);
}
*/
