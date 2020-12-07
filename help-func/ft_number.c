/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:37:53 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 20:37:55 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

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

int		ft_is_number(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		ft_nbr_split(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_zeros(char *str)
{
	int i;

	i = 0;
	while (str[i] == '0')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

float	ft_calcul_distance(float x1, float y1, float x2, float y2)
{
	return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

