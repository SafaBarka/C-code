/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 13:52:46 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 14:00:05 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_render_sprites(void)
{
	t_list *tmp;

	tmp = g_c.sp;
	ft_sort_list();
	while (tmp != NULL)
	{
		ft_render_sprite(tmp);
		tmp = tmp->next;
	}
}

void	ft_render_sprite(t_list *tmp)
{
	float angle;

	angle = atan2(((t_sprit *)tmp->line)->y - g_c.player.y,
			((t_sprit *)tmp->line)->x - g_c.player.x);
	while (angle - (g_c.player.rota) > M_PI)
		angle -= 2 * M_PI;
	while (angle - (g_c.player.rota) < -M_PI)
		angle += 2 * M_PI;
	angle = angle - (g_c.player.rota);
	if (g_c.h > g_c.w)
		((t_sprit *)tmp->line)->size =
			(g_c.h / ((t_sprit *)tmp->line)->dis) * g_c.tw;
	else
		((t_sprit *)tmp->line)->size = (g_c.w /
			((t_sprit *)tmp->line)->dis) * g_c.tw;
	((t_sprit *)tmp->line)->y_ofst = (g_c.h / 2) -
		(((t_sprit *)tmp->line)->size / 2);
	((t_sprit *)tmp->line)->x_ofst = ((angle * g_c.w) / g_c.fov) +
		((g_c.w / 2) - (((t_sprit *)tmp->line)->size / 2));
	draw_sprite(tmp);
}

void	draw_sprite(t_list *tmp)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < ((t_sprit *)tmp->line)->size - 1)
	{
		if (((t_sprit *)tmp->line)->x_ofst + i < 0 ||
				((t_sprit *)tmp->line)->x_ofst + i >= g_c.w)
			continue;
		if ((int)((t_sprit *)tmp->line)->x_ofst + i >= g_c.nbrr)
			continue;
		if (((t_sprit *)tmp->line)->dis > g_c.rays[
				(int)((t_sprit *)tmp->line)->x_ofst + i].dis)
			continue;
		j = -1;
		while (++j < ((t_sprit *)tmp->line)->size - 1)
		{
			if (((t_sprit *)tmp->line)->y_ofst + j < 0 ||
					((t_sprit *)tmp->line)->y_ofst + j >= g_c.h)
				continue;
			sprite_pp(tmp, i, j);
		}
	}
}

void	sprite_pp(t_list *tmp, int i, int j)
{
	int color;

	color = g_c.t[4].addr[((int)g_c.t[4].w * (j * \
	(int)g_c.t[4].h /
			(int)((t_sprit *)tmp->line)->size)) + (i * (int)g_c.t[4].w /
			(int)((t_sprit *)tmp->line)->size)];
	if (color != 0)
	{
		ft_put_pixel_to_image(((t_sprit *)tmp->line)->x_ofst + i,
				((t_sprit *)tmp->line)->y_ofst + j, color);
	}
}

void	ft_store_sprite(int y, int x)
{
	t_sprit *sprite;

	sprite = malloc(sizeof(t_sprit));
	if (!sprite)
		ft_err("memory problem");
	sprite->x = x * g_c.tw + (g_c.tw / 2);
	sprite->y = y * g_c.th + (g_c.th / 2);
	ft_lstadd_back(&g_c.sp, ft_lstnew((void *)sprite));
}
