/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:43:45 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/17 16:48:55 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_trim_split_f(void)
{
	if (g_c.f != -1)
		ft_err("redefining variable 'F' in file");
	if (!(g_c.rgb.trim = ft_strtrim(g_c.line + 1, " ")))
		ft_err("memory problem");
	if (ft_nbr_comma(g_c.line + 1) != 2)
		ft_err("invalid parameters for floor color");
	if (!(g_c.rgb.color = ft_split(g_c.rgb.trim, ',')))
		ft_err("memory problem");
	if (ft_nbr_split(g_c.rgb.color) != 3)
		ft_err("floor color nbr  parameters are not valid");
}

void	ft_check_f(void)
{
	g_c.nbrv++;
	ft_trim_split_f();
	g_c.rgb.tmp = (char *)ft_strtrim(g_c.rgb.color[0], " ");
	if (ft_is_number(g_c.rgb.tmp) == 0)
		ft_err("floor color is not valid arg1");
	g_c.rgb.r = ft_atoi(g_c.rgb.tmp);
	free(g_c.rgb.tmp);
	g_c.rgb.tmp = (char *)ft_strtrim(g_c.rgb.color[1], " ");
	if (ft_is_number(g_c.rgb.tmp) == 0)
		ft_err("floor color is not valid arg2");
	g_c.rgb.g = ft_atoi(g_c.rgb.tmp);
	free(g_c.rgb.tmp);
	g_c.rgb.tmp = (char *)ft_strtrim(g_c.rgb.color[2], " ");
	if (ft_is_number(g_c.rgb.tmp) == 0)
		ft_err("floor color is not valid arg3");
	g_c.rgb.b = ft_atoi(g_c.rgb.tmp);
	free(g_c.rgb.tmp);
	if (g_c.rgb.r < 0 || g_c.rgb.r > 255 || g_c.rgb.g < 0
			|| g_c.rgb.g > 255 || g_c.rgb.b < 0 || g_c.rgb.b > 255)
		ft_err("something wrong with floor color");
	g_c.f = ft_create_trgb(0, g_c.rgb.r, g_c.rgb.g, g_c.rgb.b);
	ft_free_d(g_c.rgb.color);
	free(g_c.rgb.trim);
}

int		ft_create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}
