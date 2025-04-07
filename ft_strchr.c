/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:48:15 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/07 19:40:44 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *text = "42 School";

	printf("Searching for 'S': %s\n", ft_strchr(text, 'S'));
	printf("Searching for 'o': %s\n", ft_strchr(text, 'o'));
	printf("Searching for 'z': %s\n", ft_strchr(text, 'z'));
	printf("Searching for '\\0': %s\n", ft_strchr(text, '\0'));
	return (0);
}*/
