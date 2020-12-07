/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:25:15 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/17 09:29:34 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"


void ft_space_to_wall()
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
			if(g_c.map[i][j] == ' ')
				g_c.map[i][j] = '1';
			j++;
		}
		i++;
	}
}

void ft_check_fl(char *line)
{
	int i = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '1')
			ft_err("not closed map");
		i++;
	}
}

void ft_check_ml(char *line)
{
	int i = 0;
	while (line[i] == ' ')
		i++;
	if (line[i] == '0')
		ft_err("not closed map");
	i = ft_strlen(line) - 1;	
	while(i >= 0 && line[i] == ' ')
		i--;
	if(i >= 0 && line[i] == '0')
		ft_err("not closed map");
}

void ft_check_array()
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
}
void ft_render(void)
{
	ft_cast();
	ft_render_3d();
}




void ft_init_turn_walk()
{
    g_c.player->turn = 0;
    g_c.player->walk = 0;
    g_c.player->lr = 0;
}

