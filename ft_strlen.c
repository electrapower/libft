/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:21:22 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/12 17:56:22 by asalniko         ###   ########.fr       */
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
#include <string.h>

int	main()
{
	char *str = "STRING";
	char *str2 = "";
	printf("strlen: %ld\t ft_strlen: %ld\n", strlen(str), ft_strlen(str));
	printf("strlen: %ld\t ft_strlen: %ld\n", strlen(str2), ft_strlen(str2));
	return (0);
}
*/