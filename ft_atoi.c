#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nb;

	i = 0;
	negative = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] >= 13 || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '=')
		if (str[i] == '-')
			negative = -1;
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * negative);
}
