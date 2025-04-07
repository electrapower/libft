/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:24:27 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:36:00 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (i + j < len && str[i + j] == to_find[j] 
				&& to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *big = "42 is the best?";
	const char *little = "best";

	char *res = ft_strnstr(big, little, 14);
	printf("Found: %s\n", res ? res : "(null)");

	res = ft_strnstr(big, little, 10);
	printf("Found: %s\n", res ? res : "(null)");

	return (0);
}
*/
