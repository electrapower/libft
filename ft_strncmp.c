/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:40:53 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/04 17:44:54 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Result 1: %d\n", ft_strncmp("abc", "abc", 3));
	printf("Result 2: %d\n", ft_strncmp("abc", "abd", 3));
	printf("Result 3: %d\n", ft_strncmp("ab", "abc", 5));
	printf("Result 4: %d\n", ft_strncmp("abc", "ab", 5));
	return (0);
}
*/
