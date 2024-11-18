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

#include <stdio.h>
#include <stdlib.h> // malloc + free

int main(void)
{
    int test1 = 0;
    int test2 = 123;
    int test3 = -456;
    int test4 = 2147483647;
    int test5 = -2147483648;

    char *result1 = ft_itoa(test1);
    char *result2 = ft_itoa(test2);
    char *result3 = ft_itoa(test3);
    char *result4 = ft_itoa(test4);
    char *result5 = ft_itoa(test5);

    printf("Test 1: %d -> %s\n", test1, result1);
    printf("Test 2: %d -> %s\n", test2, result2);
    printf("Test 3: %d -> %s\n", test3, result3);
    printf("Test 4: %d -> %s\n", test4, result4);
    printf("Test 5: %d -> %s\n", test5, result5);

    free(result1);
    free(result2);
    free(result3);
    free(result4);
    free(result5);

    return 0;
}