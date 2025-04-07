/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalniko <asalniko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:25:03 by asalniko          #+#    #+#             */
/*   Updated: 2025/04/04 15:04:58 by asalniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_counter(const char *s, char c)
{
	size_t	word_counter;

	if (! *s)
		return (0);
	word_counter = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			word_counter++;
		s++;
	}
	return (word_counter);
}

char	*ft_worddup(const char *str, char c)
{
	const char	*start;
	char		*word;
	size_t		len;
	size_t		i;

	start = str;
	len = 0;
	i = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = ft_word_counter(s, c);
	splitted = malloc(sizeof(char *) * (words + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		splitted[i] = ft_worddup(s, c);
		while (*s && *s != c)
			s++;
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char **result = ft_split("Hello,World,42,School", ',');
    int i = 0;

    if (!result)
    {
        printf("memory allocation failed\n");
        return (1);
    }

    while (result[i])
    {
        printf("substring %d: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
}*/
