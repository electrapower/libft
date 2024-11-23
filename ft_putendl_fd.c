/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:37:00 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/14 18:38:01 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
#include <stdio.h>

int main(void)
{
    // test 1: stdout
    printf("Test 1: Writing to stdout -> ");
    ft_putendl_fd("Hello, World!", 1);

    // test 2: stderr
    fprintf(stderr, "Test 2: Writing to stderr -> ");
    ft_putendl_fd("Error message", 2);

    // test 3: NULL
    printf("Test 3: Writing NULL to stdout (should do nothing) -> ");
    ft_putendl_fd(NULL, 1);

    return (0);
}*/