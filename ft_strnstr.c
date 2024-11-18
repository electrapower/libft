/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:24:27 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 17:27:43 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
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
