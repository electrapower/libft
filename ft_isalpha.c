/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:18:07 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:21:14 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	test_chars[] = {'A', 'z', '%', '9', ' ', '\n', 'b', '!', 'Z', 'm'};
	int	i = 0;

	while (i < 10)
	{
		char c = test_chars[i];
		int original = isalpha(c) != 0;
		int custom = ft_isalpha(c) != 0;

		printf("char: '%c' | isalpha: %d | ft_isalpha: %d | %s\n",
			c,
			original,
			custom,
			(original == custom) ? "✅ match" : "❌ mismatch");
		i++;
	}
	return (0);
}
*/
