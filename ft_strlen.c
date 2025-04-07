/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:21:22 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:34:46 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Len of 'Hello': %zu\n", ft_strlen("Hello"));
	printf("Len of '': %zu\n", ft_strlen(""));
	printf("Len of NULL: %zu\n", ft_strlen(NULL));
	return (0);
}
*/
