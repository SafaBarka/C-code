/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_horiz_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:41:02 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/27 18:39:47 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"


void	ft_set_horiz_var(t_ray *ray)
{
	ray->yi = floor(g_c.player.y / g_c.th) * g_c.th;
	ray->yi += ray->d ? g_c.th : 0;
	ray->xi = g_c.player.x + (ray->yi - g_c.player.y) / tan(ray->a);
	ray->ys = g_c.th;
	ray->ys *= ray->u ? -1 : 1;
	ray->xs = g_c.th / tan(ray->a);
	ray->xs *= (ray->l && ray->xs > 0) ? -1 : 1;
	ray->xs *= (ray->r && ray->xs < 0) ? -1 : 1;
}

void	ft_set_horiz_distance(t_ray *ray)
{
	float	xtocheck;
	float	ytocheck;

	g_c.nexthx = ray->xi;
	g_c.nexthy = ray->yi;
	while (g_c.nexthx > 0 && g_c.nexthx < g_c.temp_w
			&& g_c.nexthy > 0 && g_c.nexthy < g_c.temp_h)
	{
		xtocheck = g_c.nexthx;
		ytocheck = g_c.nexthy + (ray->u ? -1 : 0);
		if (floor(xtocheck / g_c.tw) < g_c.co
			&& floor(ytocheck / g_c.th) < g_c.ro
			&& ft_has_wall(xtocheck, ytocheck) == '1')
		{
			ray->hx = g_c.nexthx;
			ray->hy = g_c.nexthy;
			ray->fh = 1;
			break ;
		}
		else
		{
			g_c.nexthx += ray->xs;
			g_c.nexthy += ray->ys;
		}
	}
}


void	ft_set_vert_var(t_ray *ray)
{
	ray->xi = floor(g_c.player.x / g_c.tw) * g_c.tw;
	ray->xi += ray->r ? g_c.tw : 0;
	ray->yi = g_c.player.y + (ray->xi - g_c.player.x) * tan(ray->a);
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
