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
