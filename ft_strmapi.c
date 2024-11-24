#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	f(unsigned int i, char c) // prototyping inner f
{
	printf("inner function: i = %d char = %c\n", i, c);
	if ((c >= 'a' && c <= 'z'))
         return (c - ('a' - 'A'));
	i++;
	return (0);
}

int main()
{
	char str[15] = "capitalize";
	
	printf("%s\n", str);
	printf("%s\n", ft_strmapi(str, f));
	return 0;
}*/