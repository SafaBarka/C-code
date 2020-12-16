/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:13:37 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 13:27:27 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_read_map(int fd, int i)
{
	while (g_c.i >= 0)
	{
		if (g_c.i == 0)
		{
			if (g_c.line[0] == '\0')
				g_c.empty = 1;
			else
				ft_valid();
			break ;
		}
		else
		{
			if (g_c.line[0] == '\0')
				g_c.empty = 1;
			else
				ft_valid();
		}
		free(g_c.line);
		g_c.i = get_next_line(fd, &g_c.line);
	}
	if (g_c.nbrl == 0)
		ft_err("map is missing.");
	if (g_c.player.f == 0)
		ft_err("player is missing.");
}

void	ft_valid(void)
{
	g_c.nbrl++;
	ft_check_inv();
	if (g_c.empty == 1 && g_c.nbrl > 0)
		ft_err("break line in map.");
	else
		ft_store_list();
}

void	ft_check_inv(void)
{
	int i;
	int len;

	len = ft_strlen(g_c.line);
	i = 0;
	while (i < len)
	{
		if (g_c.player.f == 0 && g_c.line[i] == 'N')
			ft_set_player(i, (3 * M_PI) / 2);
		else if (g_c.player.f == 0 && g_c.line[i] == 'S')
			ft_set_player(i, (M_PI / 2));
		else if (g_c.player.f == 0 && g_c.line[i] == 'W')
			ft_set_player(i, M_PI);
		else if (g_c.player.f == 0 && g_c.line[i] == 'E')
			ft_set_player(i, 0);
		else if (g_c.line[i] == 'N' || g_c.line[i] == 'S'
				|| g_c.line[i] == 'W' || g_c.line[i] == 'E')
			ft_err("redefined player in map.");
		else if (g_c.line[i] != '1' && g_c.line[i] != ' ' && g_c.line[i] != '0'
				&& g_c.line[i] != '2')
			ft_err("element not valid in map.");
		i++;
	}
}

void	ft_set_player(int i, float angle)
{
	g_c.player.x = i;
	g_c.player.y = g_c.nbrl;
	g_c.player.f = 1;
	g_c.player.rota = angle;
	if (g_c.line[i] == 'N')
		g_c.player.n = 1;
	else if (g_c.line[i] == 'S')
		g_c.player.s = 1;
	else if (g_c.line[i] == 'W')
		g_c.player.w = 1;
	else if (g_c.line[i] == 'E')
		g_c.player.e = 1;
	g_c.line[i] = '0';
}
