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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > s_len - start)
		len = s_len - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t	len;
    size_t  i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
    str = malloc(len + 1);
    if (!str)
        return (NULL);
   i = 0;
    while (i < len)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h> // free

int main()
{
    char *string = "ABCddddddABC";
    char *del = "ABC";
    char *string2 = "QWERTYqwertyEEEERRRRTTTT";
    char *del2 = "QWERTY";
    char *result1;
    char *result2;

    result1 = ft_strtrim(string, del);
    result2 = ft_strtrim(string2, del2);
    if (result1)
    {
        printf("%s - %s = %s\n", string, del, result1);
        free(result1);
    }
    else
        printf("memory allocation failed for first string\n");
    if (result2)
    {
        printf("%s - %s = %s\n", string2, del2, result2);
        free(result2); 
    }
    else
        printf("memory allocation failed for second string\n");
    return 0;
}
*/