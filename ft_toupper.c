/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:23:02 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 17:23:12 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'Z', 'a', 'z', '0', '!', '@', 'M', 'm'};
    int i = 0;

    printf("testing ft_toupper:\n");
    while (i < sizeof(test_chars) / sizeof(test_chars[0]))
    {
        char original = test_chars[i];
        char converted = ft_toupper(original);
        printf("Original: %c (%d) -> Uppercase: %c (%d)\n", original, original, converted, converted);
        i++;
    }

    return 0;
}*/