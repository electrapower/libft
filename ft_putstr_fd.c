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

void	ft_putstr(char *str, int fd)
{
	if (!str)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}
