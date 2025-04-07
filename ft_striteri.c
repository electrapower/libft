/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:28:08 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/07 19:50:28 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void	toupper_wrap(unsigned int i, char *c)
{
    (void)i; 
    *c = ft_toupper(*c); 
}

int	main(void)
{
    char str[] = "hi world!";

    printf("Before: %s\n", str);
    ft_striteri(str, toupper_wrap);
    printf("After: %s\n", str);

    return 0;
}*/
