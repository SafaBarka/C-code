/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:15:17 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 14:34:32 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_start_end(int j, int i)
{
	if (i == 0)
	{
		if (g_c.map[j][i + 1] == ' ')
			ft_err("map not closed");
	}
	else if (i == g_c.ml - 1)
	{
		if (g_c.map[j][i - 1] == ' ')
			ft_err("map not closed");
	}
	else
	{
		if (g_c.map[j][i + 1] == ' ' || g_c.map[j][i - 1] == ' ')
			ft_err("map not closed");
	}
}

void	ft_first_last(int j, int i)
{
	if (j == 0)
	{
		if (g_c.map[j + 1][i] == ' ')
			ft_err("map not closed");
	}
	else if (j == g_c.nbrl - 1)
	{
		if (g_c.map[j - 1][i] == ' ')
			ft_err("map not closed");
	}
	else
	{
		if (g_c.map[j + 1][i] == ' ' || g_c.map[j - 1][i] == ' ')
			ft_err("map not closed");
	}
}

void	ft_check_space(int j, int i)
{
	ft_start_end(j, i);
	ft_first_last(j, i);
}

void	ft_check_spaces(void)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j < g_c.nbrl)
	{
		while (i < g_c.ml)
		{
			if (g_c.map[j][i] == '0' || g_c.map[j][i] == '2')
				ft_check_space(j, i);
			i++;
		}
		j++;
		i = 0;
	}
}
