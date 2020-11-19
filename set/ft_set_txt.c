/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:50:56 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 18:53:06 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_set_we(char *str)
{
	if (!(g_c.t[0].img = mlx_xpm_file_to_image(g_c.mlx,
												"txt64-4.xpm",
												&g_c.t[0].w,
												&g_c.t[0].h)))
		ft_err("something wrong with xpm file no");
	if (!(g_c.t[0].addr = (unsigned int *)mlx_get_data_addr(g_c.t[0].img,
															&g_c.t[0].bpp,
															&g_c.t[0].ll,
															&g_c.t[0].e)))
		ft_err("something wrong with xpm file no");
	g_c.nbrv++;
}

void	ft_set_so(char *str)
{
	if (!(g_c.t[1].img = mlx_xpm_file_to_image(g_c.mlx,
												"txt64-4.xpm",
												&g_c.t[1].w,
												&g_c.t[1].h)))
		ft_err("something wrong with xpm file no");
	if (!(g_c.t[1].addr = (unsigned int *)mlx_get_data_addr(g_c.t[1].img,
															&g_c.t[1].bpp,
															&g_c.t[1].ll,
															&g_c.t[1].e)))
		ft_err("something wrong with xpm file no");
	g_c.nbrv++;
}

void	ft_set_no(char *s)
{
	if (!(g_c.t[2].img = mlx_xpm_file_to_image(g_c.mlx,
												"txt64-4.xpm",
												&g_c.t[2].w,
												&g_c.t[2].h)))
		ft_err("something wrong with xpm file no");
	if (!(g_c.t[2].addr = (unsigned int *)mlx_get_data_addr(g_c.t[2].img,
															&g_c.t[2].bpp,
															&g_c.t[2].ll,
															&g_c.t[2].e)))
		ft_err("something wrong with xpm file no");
	g_c.nbrv++;
}

void	ft_set_ea(char *str)
{
	if (!(g_c.t[3].img = mlx_xpm_file_to_image(g_c.mlx,
												"txt64-4.xpm",
												&g_c.t[3].w,
												&g_c.t[3].h)))
		ft_err("something wrong with xpm file no");
	if (!(g_c.t[3].addr = (unsigned int *)mlx_get_data_addr(g_c.t[3].img,
															&g_c.t[3].bpp,
															&g_c.t[3].ll,
															&g_c.t[3].e)))
		ft_err("something wrong with xpm file no");
	g_c.nbrv++;
}
