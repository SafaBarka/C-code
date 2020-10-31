#include "../../variables/cub3d.h"

int		ft_atoi(const char *str)
{
	unsigned long	nbr;
	int				i;
	int				n;

	i = 0;
	n = 1;
	nbr = 0;
	while (((*str >= 9 && *str <= 13) || *str == 32) && *str != '\0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = n * (-1);
		str++;
	}
	while ((*str >= 48 && *str <= 57) && *str != '\0')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	if (nbr > 9223372036854775807)
		return (n > 0 ? -1 : 0);
	return (nbr * n);
}
