/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:05:41 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/12 20:06:01 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *) b;
	while (i < len)
	{
		result[i] = c;
		i++;
	}
	return (b);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    // test1: first 5 bytes
    char buffer1[11] = "HelloWorld";
    printf("Before ft_memset: buffer1 = \"%s\"\n", buffer1);
    ft_memset(buffer1, 'x', 5); // change first 5 to 'x'
    printf("After ft_memset: buffer1 = \"%s\"\n\n", buffer1);

    // test2: full
    char buffer2[11] = "1234567890";
    printf("Before ft_memset: buffer2 = \"%s\"\n", buffer2);
    ft_memset(buffer2, '-', 10); // everything becomes '-'
    printf("After ft_memset: buffer2 = \"%s\"\n\n", buffer2);

    // test3: to become zero
    char buffer3[11] = "TestString";
    printf("Before ft_memset: buffer3 = \"%s\"\n", buffer3);
    ft_memset(buffer3, '\0', 11); // clean up
    printf("After ft_memset: buffer3 = \"%s\"\n\n", buffer3);

    // test4: zero length
    char buffer4[11] = "NoChange";
    printf("Before ft_memset: buffer4 = \"%s\"\n", buffer4);
    ft_memset(buffer4, '!', 0); // nothing to change here
    printf("After ft_memset: buffer4 = \"%s\"\n", buffer4);

    return 0;
}