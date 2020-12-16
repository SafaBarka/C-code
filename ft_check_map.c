/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:05:08 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 14:11:59 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_space_to_wall(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_c.ro)
	{
		j = 0;
		while (j < g_c.co)
		{
			if (g_c.map[i][j] == ' ')
				g_c.map[i][j] = '1';
			j++;
		}
		i++;
	}
}

void	ft_check_fl(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '1')
			ft_err("not closed map");
		i++;
	}
}

void	ft_check_ml(char *line)
{
	int i;

	i = 0;
	while (line[i] == ' ')
		i++;
	if (line[i] == '0')
		ft_err("not closed map");
	i = ft_strlen(line) - 1;
	while (i >= 0 && line[i] == ' ')
		i--;
	if (i >= 0 && line[i] == '0')
		ft_err("not closed map");
}

void	ft_dist_sprite(void)
{
	t_list	*tmp;
	float	dist;

	tmp = g_c.sp;
	dist = 0;
	while (tmp)
	{
		((t_sprit *)tmp->line)->dis = ft_calcul_distance(g_c.player.x,
									g_c.player.y,
									((t_sprit *)tmp->line)->x,
									((t_sprit *)tmp->line)->y);
		tmp = tmp->next;
	}
}

void	ft_check_array(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_c.ro)
	{
		if (i == 0 || i == g_c.nbrl - 1)
			ft_check_fl(g_c.map[i]);
		else
			ft_check_ml(g_c.map[i]);
		i++;
	}
	i = 0;
	while (j < g_c.ro)
	{
		while (i < g_c.co)
		{
			if (g_c.map[j][i] == '2')
				ft_store_sprite(j, i);
			i++;
		}
		i = 0;
		j++;
	}
}
