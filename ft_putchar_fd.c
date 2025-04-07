/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:20:28 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/04 15:45:33 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('s', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('d', 2);
	ft_putchar_fd('\n', 2);
	return (0);
}
*/
