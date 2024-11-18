/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:38:54 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 20:25:09 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		return (ft_strdup(s + start));
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s + start, len);
	copy[len] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int main()
{	
	char str[12] = "blablabloblo";
	printf("\"%s\", after ft_substr - \"%s\"\n", str, ft_substr(str, 3, 3));
	return (0);	
}
*/
