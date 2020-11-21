/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_mlx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:08:29 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/19 17:17:20 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_initialize_mlx(void)
{
	g_c.mlx = mlx_init();
	g_c.mlx_win = mlx_new_window(g_c.mlx, g_c.w, g_c.h, "cub3d");
	g_c.img.im = mlx_new_image(g_c.mlx, g_c.w, g_c.h);
	g_c.img.addr = (unsigned int *)mlx_get_data_addr(g_c.img.im,
													&g_c.img.bpp,
													&g_c.img.ll,
													&g_c.img.e);
}
