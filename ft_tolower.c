/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:22:45 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 17:22:51 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'Z', 'a', 'z', '0', '!', '@', 'M', 'm'};
    int i = 0;

    printf("testing ft_tolower:\n");
    while (i < sizeof(test_chars) / sizeof(test_chars[0]))
    {
        char original = test_chars[i];
        char converted = ft_tolower(original);
        printf("Original: %c (%d) -> Lowercase: %c (%d)\n", original, original, converted, converted);
        i++;
    }

    return 0;
}
*/