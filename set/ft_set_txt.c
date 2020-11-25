/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:21:49 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/21 10:21:51 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_set_txt(void)
{
	ft_set_no();
	ft_set_so();
	ft_set_we();
	ft_set_ea();
	ft_set_s();
}

void	ft_set_no(void)
{
	g_c.t[0].img = mlx_xpm_file_to_image(g_c.mlx,
										g_c.no,
										&g_c.t[0].w,
										&g_c.t[0].h);
	if (g_c.t[0].img == NULL)
		ft_err("something wrong with 'N' file");
	g_c.t[0].addr = (unsigned int *)mlx_get_data_addr(g_c.t[0].img,
													&g_c.t[0].bpp,
													&g_c.t[0].ll,
													&g_c.t[0].e);
}

void	ft_set_so(void)
{
	g_c.t[1].img = mlx_xpm_file_to_image(g_c.mlx,
										g_c.so,
										&g_c.t[1].w,
										&g_c.t[1].h);
	if (g_c.t[1].img == NULL)
		ft_err("something wrong with 'S' file");
	g_c.t[1].addr = (unsigned int *)mlx_get_data_addr(g_c.t[1].img,
													&g_c.t[1].bpp,
													&g_c.t[1].ll,
													&g_c.t[1].e);
}

void	ft_set_we(void)
{
	g_c.t[2].img = mlx_xpm_file_to_image(g_c.mlx,
										g_c.no,
										&g_c.t[2].w,
										&g_c.t[2].h);
	if (g_c.t[2].img == NULL)
		ft_err("something wrong with 'WE' file");
	g_c.t[2].addr = (unsigned int *)mlx_get_data_addr(g_c.t[2].img,
													&g_c.t[2].bpp,
													&g_c.t[2].ll,
													&g_c.t[2].e);
}

void	ft_set_ea(void)
{
	g_c.t[3].img = mlx_xpm_file_to_image(g_c.mlx,
										g_c.no,
										&g_c.t[3].w,
										&g_c.t[3].h);
	if (g_c.t[3].img == NULL)
		ft_err("something wrong with 'EA' file");
	g_c.t[3].addr = (unsigned int *)mlx_get_data_addr(g_c.t[3].img,
													&g_c.t[3].bpp,
													&g_c.t[3].ll,
													&g_c.t[3].e);
}

void	ft_set_s(void)
{
	g_c.t[4].img = mlx_xpm_file_to_image(g_c.mlx,
										g_c.s,
										&g_c.t[4].w,
										&g_c.t[4].h);
	if (g_c.t[4].img == NULL)
		ft_err("something wrong with sprite file");
	g_c.t[4].addr = (unsigned int *)mlx_get_data_addr(g_c.t[4].img,
													&g_c.t[4].bpp,
													&g_c.t[4].ll,
													&g_c.t[4].e);
}
