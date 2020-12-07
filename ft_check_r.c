/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_r_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:10:02 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 13:33:16 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_set_r(char **str)
{
	int screenw;
	int screenh;

	mlx_get_screen_size(g_c.mlx,&screenw,&screenh);
	g_c.nbrv++;
	g_c.w = ft_atoi(str[1]);
	g_c.h = ft_atoi(str[2]);
	if (g_c.w > screenw)
		g_c.w = screenw;
	if (g_c.h > screenh)
		g_c.h = screenh;
	g_c.nbrr = (int)(g_c.w);
	g_c.rays = (t_ray *)malloc(sizeof(t_ray) * g_c.nbrr);
}

void	ft_err_r(char **str)
{
	if (g_c.w != -1 && g_c.h != -1)
		ft_err("redefining variable 'R' in file");
	if (ft_nbr_split(str) != 3)
		ft_err("'R' parameters are not valid");
	if (ft_zeros(str[1]) || ft_zeros(str[2]))
		ft_err("'R' parameters are not valid");
	if (!ft_is_number(str[1]) || !ft_is_number(str[2]))
		ft_err("'R' parameters are not valid");
}

void	ft_check_r(char **str)
{
	ft_err_r(str);
	ft_set_r(str);
	ft_init_mlx();

}




