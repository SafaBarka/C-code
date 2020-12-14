/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_conf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:16:38 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:32:31 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
void	ft_init_tex(void)
{
	if (!(g_c.t = malloc(sizeof(t_texture) * 5)))
		ft_err("memory problem");
}

void	ft_init_wall(void)
{
	g_c.wall = malloc(sizeof(t_wall));
	if (!g_c.wall)
		ft_err("memory problem");
}

void	ft_init_mlx(void)
{
	if (!(g_c.mlx = mlx_init()))
		ft_err("failed to load graphic");
	if (!(g_c.mlx_win = mlx_new_window(g_c.mlx, g_c.w, g_c.h, "cub3d")))
		ft_err("failed to load graphic");
	if (!(g_c.img.im = mlx_new_image(g_c.mlx, g_c.w, g_c.h)))
		ft_err("failed to load graphic");
	if (!(g_c.img.addr = (unsigned int *)mlx_get_data_addr(g_c.img.im,
													&g_c.img.bpp,
													&g_c.img.ll,
													&g_c.img.e)))
		ft_err("failed to load graphic");
}

void	ft_init_play(void)
{
	//if (!(g_c.player = malloc(sizeof(t_player))))
	//	ft_err("memory problem");
	g_c.player.x = 0;
	g_c.player.y = 0;
	g_c.player.f = 0;
	g_c.player.e = 0;
	g_c.player.w = 0;
	g_c.player.n = 0;
	g_c.player.s = 0;
	g_c.player.rad = 1;
	g_c.player.mvs = 15;
	g_c.player.rots = 20 * (M_PI / 180);
	g_c.player.turn = 0;
	g_c.player.walk = 0;
}

void	ft_init(void)
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
	g_c.f = -1;
	g_c.c = -1;
	g_c.s = NULL;
	g_c.ml = 0;
	g_c.ll = -1;
	g_c.fm = 0;
	g_c.nbrv = 0;
	g_c.nbrl = 0;
	g_c.map = NULL;
	g_c.head = NULL;
	g_c.empty = 0;
	g_c.fov = 60 * (M_PI / 180);
	g_c.sp = NULL;
	ft_init_tex();
	ft_init_wall();
	ft_init_play();
}




