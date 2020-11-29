/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_ray.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:52 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/26 14:36:00 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_initialize_ray(t_ray *ray)
{
	ray->a = ft_normalize_angle(ray->a);
	ray->d = ray->a >= 0 && ray->a <= M_PI;
	ray->u = !ray->d;
	ray->r = (ray->a >= 0 && ray->a <= M_PI / 2)
			|| (ray->a >= 3 * (M_PI / 2) && ray->a <= 2 * M_PI);
	ray->l = !ray->r;
	ray->fh = 0;
	ray->hx = 0;
	ray->hy = 0;
	ray->fv = 0;
	ray->vx = 0;
	ray->vy = 0;
	ray->dish = 0;
	ray->disv = 0;
	ray->dis = 0;
	ray->wx = 0;
	ray->wy = 0;
}
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

float	ft_normalize_angle(float angle)
{
	angle = fmod(angle, 2 * M_PI);
	if (angle < 0)
		angle = (2 * M_PI) + angle;
	return (angle);
}
