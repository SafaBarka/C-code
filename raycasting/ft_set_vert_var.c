/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_vert_var.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:24:08 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/27 18:45:58 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_set_vert_var(t_ray *ray)
{
	ray->xi = floor(g_c.player->x / g_c.tw) * g_c.tw;
	ray->xi += ray->r ? g_c.tw : 0;
	ray->yi = g_c.player->y + (ray->xi - g_c.player->x) * tan(ray->a);
	ray->xs = g_c.tw;
	ray->xs *= ray->l ? -1 : 1;
	ray->ys = g_c.tw * tan(ray->a);
	ray->ys *= (ray->u && ray->ys > 0) ? -1 : 1;
	ray->ys *= (ray->d && ray->ys < 0) ? -1 : 1;
}

void	ft_set_vert_distance(t_ray *ray)
{
	float	xtocheck;
	float	ytocheck;

	g_c.nextvx = ray->xi;
	g_c.nextvy = ray->yi;
	while (g_c.nextvx > 0 && g_c.nextvx < g_c.temp_w
			&& g_c.nextvy > 0 && g_c.nextvy < g_c.temp_h)
	{
		xtocheck = g_c.nextvx + (ray->l ? -1 : 0);
		ytocheck = g_c.nextvy;
		if (floor(xtocheck / g_c.tw) < g_c.co
			&& floor(ytocheck / g_c.th) < g_c.ro
			&& ft_has_wall(xtocheck, ytocheck) == '1')
		{
			ray->vx = g_c.nextvx;
			ray->vy = g_c.nextvy;
			ray->fv = 1;
			break ;
		}
		else
		{
			g_c.nextvx += ray->xs;
			g_c.nextvy += ray->ys;
		}
	}
}
