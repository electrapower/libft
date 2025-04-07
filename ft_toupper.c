/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:23:02 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:37:33 by asalniko         ###   ########.fr       */
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

int	main(void)
{
	printf("toupper(a): %c\n", ft_toupper('a')); // A
	printf("toupper(z): %c\n", ft_toupper('z')); // Z
	printf("toupper(A): %c\n", ft_toupper('A')); // A
	printf("toupper(5): %c\n", ft_toupper('5')); // 5
	return (0);
}
*/
