/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_ray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:20:29 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/26 14:27:37 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_draw_ray(t_ray *ray)
{
	float hdistance;
	float vdistance;

	hdistance = ray->fh
		? ft_calcul_distance(g_c.player->x, g_c.player->y, ray->hx, ray->hy)
		: 1000000;
	vdistance = ray->fv
		? ft_calcul_distance(g_c.player->x, g_c.player->y, ray->vx, ray->vy)
		: 1000000;
	if (vdistance < hdistance)
	{
		ray->fh = 0;
		ray->dis = vdistance;
		ray->wx = ray->vx;
		ray->wy = ray->vy;
	}
	else
	{
		ray->fv = 0;
		ray->dis = hdistance;
		ray->wx = ray->hx;
		ray->wy = ray->hy;
	}
}

float	ft_calcul_distance(float x1, float y1, float x2, float y2)
{
	return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}
