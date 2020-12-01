/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_r_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:46:13 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:50:29 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_set_r(char **str)
{
	g_c.nbrv++;
	g_c.w = ft_atoi(str[1]);
	g_c.h = ft_atoi(str[2]);
	g_c.nbrr = (int)(g_c.w);
	g_c.rays = (t_ray *)malloc(sizeof(t_ray) * g_c.nbrr);
}

void	ft_set_f(char *str)
{
	char	**color;
	int		r;
	int		g;
	int		b;

	g_c.nbrv++;
	if (!(color = ft_split(str, ',')))
		ft_err("memory problem");
	if (ft_nbr_split(color) != 3)
		ft_err("something wrong with floor color");
	if (ft_is_number(color[0]) == 0 || ft_is_number(color[1]) == 0
		|| ft_is_number(color[2]) == 0)
		ft_err("something wrong with floor color");
	r = ft_atoi(color[0]);
	g = ft_atoi(color[1]);
	b = ft_atoi(color[2]);
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		ft_err("something wrong with floor color");
	g_c.f = ft_create_trgb(0, r, g, b);
	////////////////////
	int j;
	j = 0;
	while (color[j])
	{
		free(color[j]);
		j++;
	}
	free(color);
	////////////////////
}

void	ft_set_c(char *str)
{
	char	**color;
	int		r;
	int		g;
	int		b;

	g_c.nbrv++;
	if (!(color = ft_split(str, ',')))
		ft_err("memory problem");
	if (ft_nbr_split(color) != 3)
		ft_err("something wrong with floor color");
	if (ft_is_number(color[0]) == 0 || ft_is_number(color[1]) == 0
		|| ft_is_number(color[2]) == 0)
		ft_err("something wrong with floor color");
	r = ft_atoi(color[0]);
	g = ft_atoi(color[1]);
	b = ft_atoi(color[2]);
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		ft_err("something wrong with floor color");
	g_c.c = ft_create_trgb(0, r, g, b);
	//////////////////////
	int j;
	j = 0;
	while (color[j])
	{
		free(color[j]);
		j++;
	}
	free(color);
	////////////////////
}

int		ft_create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}
