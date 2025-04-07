/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:48:43 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:36:15 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "hello world!";
	char c1 = 'o';
	char c2 = 'z';
	char c3 = '\0';

	printf("Last 'o' in \"%s\": %s\n", str, ft_strrchr(str, c1));
	printf("Last 'z' in \"%s\": %s\n", str, ft_strrchr(str, c2));
	printf("Last '\\0' in \"%s\": %p\n", str, ft_strrchr(str, c3));

	return (0);
}*/
