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

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    // test 1: stdout
    printf("Test 1: Writing to stdout -> ");
    ft_putchar_fd('A', 1); // 'A' in stdout
    printf("\n\n");

    // test 2: stderr
    fprintf(stderr, "Test 2: Writing to stderr -> ");
    ft_putchar_fd('B', 2); // 'B' in stderr
    fprintf(stderr, "\n\n");

    // test 3: file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }
    printf("Test 3: Writing to file 'output.txt' -> ");
    ft_putchar_fd('C', fd); // 'C' in file
    printf("Done. Check the file.\n");
    close(fd);

    return (0);
}*/