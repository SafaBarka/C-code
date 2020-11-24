/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:13:37 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/24 13:58:21 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_read_map(int fd, int i)
{
	g_c.empty = 0;
	while (g_c.i > 0)
	{
		if (g_c.line[0] == '\0')
			g_c.empty = 1;
		else
			ft_valid(g_c.line);
		g_c.i = get_next_line(fd, &g_c.line);
	}
}
void ft_valid(char *line)
{
	ft_check_inv(line);
	if (g_c.empty == 1 && g_c.nbrl > 0)
		ft_err("break line in map ");
	else 
	{
		ft_store_list(g_c.line);
		g_c.nbrl++;
	}
}

void	ft_check_inv(char *line)
{
	int i;
	int len ;
	
	len = ft_strlen(line);
	i = 0;
	while (i < len)
	{
		if (g_c.player->f == 0 && line[i] == 'N')
		{
			ft_set_player(i, (3 *M_PI)/2 , line[i]);
			line[i] = '0';
		}
		else if (g_c.player->f == 0 && line[i] == 'S')
		{
			ft_set_player(i, (M_PI/ 2) , line[i]);
			line[i] = '0';
		}
		else if (g_c.player->f == 0 && line[i] == 'W')
		{
			ft_set_player(i, M_PI , line[i]);
			line[i] = '0';
		}
		else if (g_c.player->f == 0 && line[i] == 'E')
		{
			ft_set_player(i, 0 , line[i]);
			line[i] = '0';
		}
		else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W' || line[i] == 'E')
			ft_err("redefined player in map ");
		else if (line[i] == '2')
		{
			line[i] = '0';
        }
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
