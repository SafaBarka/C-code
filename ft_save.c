/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:15:22 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/17 13:12:31 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		*get_colors(int color)
{
	int		*colors;

	if (!(colors = malloc(3 * sizeof(int))))
		ft_err("problem memory");
	colors[0] = ((color >> 16) & 0xFF);
	colors[1] = ((color >> 8) & 0xFF);
	colors[2] = ((color) & 0xFF);
	return (colors);
}

void	ft_initialize_save(void)
{
	g_c.bitm.w = g_c.w;
	g_c.bitm.he = g_c.h;
	g_c.bitm.bc = 24;
	g_c.bitm.wb = ((g_c.bitm.w * g_c.bitm.bc + 31) / 32) * 4;
	g_c.bitm.imgs = g_c.bitm.wb * g_c.bitm.he;
	g_c.bitm.bs = 40;
	g_c.bitm.bob = 54;
	g_c.bitm.fs = 54 + g_c.bitm.imgs;
	g_c.bitm.bp = 1;
	if (!(g_c.bitm.buf = malloc(g_c.bitm.imgs)))
		ft_err("memory problem");
	g_c.bitm.ro = g_c.bitm.he - 1;
	g_c.bitm.co = 0;
}

int		ft_save(void)
{
	ft_initialize_save();
	ft_header();
	while (g_c.bitm.ro > 0)
	{
		while (g_c.bitm.co < g_c.w)
		{
			g_c.bitm.color = get_colors(g_c.img.addr[(g_c.bitm.he -
			g_c.bitm.ro) * g_c.bitm.w + g_c.bitm.co]);
			g_c.bitm.buf[g_c.bitm.ro * g_c.bitm.wb + g_c.bitm.co * 3 + 0] =
			g_c.bitm.color[2];
			g_c.bitm.buf[g_c.bitm.ro * g_c.bitm.wb + g_c.bitm.co * 3 + 1] =
			g_c.bitm.color[1];
			g_c.bitm.buf[g_c.bitm.ro * g_c.bitm.wb + g_c.bitm.co * 3 + 2] =
			g_c.bitm.color[0];
			free(g_c.bitm.color);
			g_c.bitm.co++;
		}
		g_c.bitm.ro--;
		g_c.bitm.co = 0;
	}
	ft_save_file();
	exit(EXIT_SUCCESS);
	return (0);
}

void	ft_save_file(void)
{
	g_c.bitm.fd = open("cub3d.bmp", O_WRONLY | O_CREAT, 0644);
	write(g_c.bitm.fd, g_c.bitm.h, 54);
	write(g_c.bitm.fd, g_c.bitm.buf, g_c.bitm.imgs);
	close(g_c.bitm.fd);
	free(g_c.bitm.buf);
}

void	ft_header(void)
{
	ft_memcpy(g_c.bitm.h, "BM", 2);
	ft_memcpy(g_c.bitm.h + 2, &g_c.bitm.fs, 4);
	ft_memcpy(g_c.bitm.h + 10, &g_c.bitm.bob, 4);
	ft_memcpy(g_c.bitm.h + 14, &g_c.bitm.bs, 4);
	ft_memcpy(g_c.bitm.h + 18, &g_c.bitm.w, 4);
	ft_memcpy(g_c.bitm.h + 22, &g_c.bitm.he, 4);
	ft_memcpy(g_c.bitm.h + 26, &g_c.bitm.bp, 2);
	ft_memcpy(g_c.bitm.h + 28, &g_c.bitm.bc, 2);
	ft_memcpy(g_c.bitm.h + 34, &g_c.bitm.imgs, 4);
}
