/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:02:08 by asalniko          #+#    #+#             */
/*   Updated: 2024/11/11 18:05:27 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
#include "libft.h"

int main(void)
{
    // stdout
    ft_putstr_fd("Hello, World!", 1);
    ft_putstr_fd("\n", 1);

    // stderr
    ft_putstr_fd("This is an error message.", 2);
    ft_putstr_fd("\n", 2);

    // empty string
    ft_putstr_fd("", 1);
    ft_putstr_fd("\n", 1);

    // new line symbols
    ft_putstr_fd("Line1\nLine2\nLine3", 1);

    return (0);
}*/