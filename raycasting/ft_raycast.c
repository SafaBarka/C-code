/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:38:04 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/26 14:40:26 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_raycast(t_ray *ray, int i)
{
	ft_initialize_ray(ray);
	ft_set_horiz_var(ray);
	ft_set_horiz_distance(ray);
	ft_set_vert_var(ray);
	ft_set_vert_distance(ray);
	ft_draw_ray(ray);
}
