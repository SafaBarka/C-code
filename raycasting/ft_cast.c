/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:16:25 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 16:41:41 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_cast(void)
{
	int			c;
	float		angle;
	t_list		*tmp;

	c = 0;
	g_c.temp_w = g_c.tw * g_c.co;
	g_c.temp_h = g_c.th * g_c.ro;
	angle = g_c.player.rota - (g_c.fov / 2);
	while (c < g_c.nbrr)
	{
		g_c.rays[c].a = angle;
		ft_raycast(&g_c.rays[c]);
		angle += g_c.fov / g_c.nbrr;
		c++;
	}
	ft_dist_sprite();
	tmp = g_c.sp;
	while (tmp != NULL)
		tmp = tmp->next;
	tmp = g_c.sp;
	while (tmp != NULL)
		tmp = tmp->next;
}

void	ft_render(void)
{
	ft_cast();
	ft_render_3d();
	ft_render_sprites();
}

void	ft_raycast(t_ray *ray)
{
	ft_initialize_ray(ray);
	ft_set_horiz_var(ray);
	ft_set_horiz_distance(ray);
	ft_set_vert_var(ray);
	ft_set_vert_distance(ray);
	ft_draw_ray(ray);
}

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
		? ft_calcul_distance(g_c.player.x, g_c.player.y, ray->hx, ray->hy)
		: 1000000;
	vdistance = ray->fv
		? ft_calcul_distance(g_c.player.x, g_c.player.y, ray->vx, ray->vy)
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
