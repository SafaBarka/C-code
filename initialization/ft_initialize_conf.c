/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_conf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:16:38 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/19 10:21:56 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_initialize_conf(void)
{
	g_c.w = -1;
	g_c.h = -1;
	g_c.th = -1;
	g_c.tw = -1;
	g_c.co = 0;
	g_c.ro = 0;
	g_c.no = NULL;
	g_c.so = NULL;
	g_c.we = NULL;
	g_c.ea = NULL;
	g_c.f = NULL;
	g_c.c = NULL;
	g_c.s = NULL;
	g_c.ml = 0;
	g_c.ll = -1;
	g_c.fm = 0;
	g_c.nbrv = 0;
	g_c.nbrl = 0;
	g_c.map = NULL;
	g_c.head = NULL;
	g_c.fov = 60 * (M_PI / 180);
	if (!(g_c.t = malloc(sizeof(t_texture) * 5)))
		ft_err("allocation failed");
	ft_initialize_mlx();
}
