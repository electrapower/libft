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

#include <unistd.h>
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

void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

#include <stdio.h>

int main()
{
	ft_putendl_fd("print string and newline", 1);
	ft_putstr_fd("print string and no newline", 1);
	return(0);
}
