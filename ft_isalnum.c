/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:35:53 by asalniko          #+#    #+#             */
/*   Updated: 2025/02/17 16:20:58 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test_chars[] = {'A', 'z', '5', '%', ' ', '\n', '0', 'g', '!', 'Z'};
	int		i = 0;

	while (i < 10)
	{
		if (ft_isalnum(test_chars[i]))
			printf("'%c' is alphanumeric ✅\n", test_chars[i]);
		else
			printf("'%c' is NOT alphanumeric ❌\n", test_chars[i]);
		i++;
	}
	return (0);
}*/
