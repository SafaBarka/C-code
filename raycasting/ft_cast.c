/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:16:25 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/26 14:20:00 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_cast(void)
{
	int		c;
	float	angle;

	g_c.temp_w = g_c.tw * g_c.co;
	g_c.temp_h = g_c.th * g_c.ro;
	c = 0;
	angle = g_c.player->rota - (g_c.fov / 2);
	while (c < g_c.nbrr)
	{
		g_c.rays[c].a = angle;
		ft_raycast(&g_c.rays[c], c);
		angle += g_c.fov / g_c.nbrr;
		c++;
	}
}
