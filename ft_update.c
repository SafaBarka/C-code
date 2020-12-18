/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:08:35 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/18 12:14:18 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_deal_key(int key)
{
	ft_init_turn_walk();
	if (key == 2)
		g_c.player.lr = -1;
	else if (key == 0)
		g_c.player.lr = +1;
	if (key == 126 || key == 13)
		g_c.player.walk = +1;
	else if (key == 125 || key == 1)
		g_c.player.walk = -1;
	else if (key == 124)
		g_c.player.turn = +1;
	else if (key == 123)
		g_c.player.turn = -1;
	else if (key == 53)
		ft_exit();
	ft_update();
	return (1);
}

int		ft_has_wall(float x, float y)
{
	int	a;
	int	b;

	if (x < 0 || x > g_c.temp_w || y < 0 || y > g_c.temp_h)
		return (1);
	a = floor(x / g_c.tw);
	b = floor(y / g_c.th);
	if (a < 0 || b < 0)
		return (1);
	return (g_c.map[b][a]);
}

void	ft_draw_black_screen(void)
{
	int y;
	int x;

	y = 0;
	while (y < g_c.h)
	{
		x = 0;
		while (x < g_c.w)
		{
			ft_put_pixel_to_image(x, y, 0x000000);
			x++;
		}
		y++;
	}
}

void	ft_update_player(void)
{
	float newx;
	float newy;
	float rlangle;

	if (g_c.player.lr != 0)
	{
		rlangle = g_c.player.rota - M_PI / 2;
		g_c.player.mvstep = g_c.player.lr * g_c.player.mvs;
	}
	else
	{
		g_c.player.rota += g_c.player.turn * g_c.player.rots;
		g_c.player.mvstep = g_c.player.walk * g_c.player.mvs;
		rlangle = g_c.player.rota;
	}
	newx = g_c.player.x + cos(rlangle) * g_c.player.mvstep * 2;
	newy = g_c.player.y + sin(rlangle) * g_c.player.mvstep * 2;
	if (ft_has_wall(newx, newy) != '1')
	{
		g_c.player.x = g_c.player.x + cos(rlangle) * g_c.player.mvstep;
		g_c.player.y = g_c.player.y + sin(rlangle) * g_c.player.mvstep;
	}
}

int		ft_update(void)
{
	ft_draw_black_screen();
	ft_update_player();
	ft_cast();
	ft_render_3d();
	ft_render_sprites();
	mlx_put_image_to_window(g_c.mlx, g_c.mlx_win, g_c.img.im, 0, 0);
	return (0);
}
