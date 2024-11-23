#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i] != '\0')
    {
        (*f)(i, &s[i]);
        i++;
    }
}
/*
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void toupper_wrapper(unsigned int i, char *c)
{
    (void)i; 
    *c = ft_toupper(*c); 
}

int main(void)
{
    char str[] = "hi world!";

    printf("Before: %s\n", str);
    ft_striteri(str, toupper_wrapper);
    printf("After: %s\n", str);

    return 0;
}*/