/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:22:45 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:37:22 by asalniko         ###   ########.fr       */
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

int	main(void)
{
	printf("tolower(A): %c\n", ft_tolower('A')); // a
	printf("tolower(Z): %c\n", ft_tolower('Z')); // z
	printf("tolower(a): %c\n", ft_tolower('a')); // a
	printf("tolower(5): %c\n", ft_tolower('5')); // 5
	return (0);
}
*/
