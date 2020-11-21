/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:13:37 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/21 20:25:54 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_read_map(int fd, int i)
{
	while ((i = get_next_line(fd, &g_c.line)) > 0)
	{
		ft_check_map(g_c.line, i);
		free(g_c.line);
	}
	if (i == 0)
	{
		ft_check_map(g_c.line, i);
		free(g_c.line);
	}
	else if (i < 0)
		ft_err("something wrong when reading file");
	if (g_c.fm == 0)
		ft_err("missing map");
}

void	ft_check_map(char *line, int i)
{
	if (!g_c.head)
		ft_check_fl(line);
	else if (g_c.ll == 1)
		ft_check_fl(line);
	else
		ft_check_ml(line);
	g_c.fm = 1;
		ft_store_list(line);
}

void	ft_check_fl(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '1')
		{
			printf("i = %d  j = %d\n", g_c.nbrl, i);
			ft_err("not valid map");
		}
		i++;
	}
}

void	ft_check_ml(char *line)
{
	int len;
	int i;

	len = ft_strlen(line);
	i = 1;
	while (i < len - 1)
	{
		if (g_c.player->f == 0 && line[i] == 'N')
			ft_set_player(i, (3 * M_PI) / 2, line[i]);
		else if (g_c.player->f == 0 && line[i] == 'S')
			ft_set_player(i, (M_PI / 2), line[i]);
		else if (g_c.player->f == 0 && line[i] == 'W')
			ft_set_player(i, M_PI, line[i]);
		else if (g_c.player->f == 0 && line[i] == 'E')
			ft_set_player(i, 0, line[i]);
		else if (line[i] == 'N' ||
				line[i] == 'S' ||
				line[i] == 'W' ||
				line[i] == 'E')
			ft_err("redefined player in map ");
		else if (line[i] != '1' && line[i] != ' ' && line[i] != '0')
			ft_err("the element not valid in map");
		i++;
	}
}

void	ft_set_player(float x, float angle, char c)
{
	g_c.player->x = x;
	g_c.player->y = g_c.nbrl;
	g_c.player->f = 1;
	g_c.player->rota = angle;
	if (c == 'N')
		g_c.player->n = 1;
	else if (c == 'S')
		g_c.player->s = 1;
	else if (c == 'W')
		g_c.player->w = 1;
	else if (c == 'E')
		g_c.player->e = 1;
}
