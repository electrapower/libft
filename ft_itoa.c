/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:52:29 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 16:32:28 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = count_digits(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num)
	{
		len--;
		str[len] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
