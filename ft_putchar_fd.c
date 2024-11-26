/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:20:28 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 17:22:07 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>

int main()
{
	printf("66 to standard output 1 is:\n");
	ft_putchar_fd(66, 1);
	ft_putchar_fd('\n', 1);
	printf("'C' to standard output 1 is:\n");
	ft_putchar_fd('C', 1);
	ft_putchar_fd('\n', 1);
    fprintf(stderr, "68 to standard error 2 is:\n");
    ft_putchar_fd(68, 2);
    ft_putchar_fd('\n', 2);
}*/