/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:17:50 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 17:18:05 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char source[] = "Hello, World!";
	char *duplicate;

	duplicate = ft_strdup(source);

	if (duplicate == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Source: %s\n", source);
	printf("Duplicate: %s\n", duplicate);

	free(duplicate);

	return (0);
}*/
