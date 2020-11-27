/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:18:53 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/17 09:23:21 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(void)
{
	int fd;
	int i;

	fd = ft_op_f("infos.cub");
	ft_init();
	ft_read_var(fd,i);
	if (g_c.nbrv != 8)
		ft_err("missing file data(variables)");
	while (g_c.i > 0 && g_c.line[0] == '\0')
		g_c.i = get_next_line(fd,&g_c.line);
		
	ft_read_map(fd,i);
	if (g_c.nbrl == 0 )
		ft_err("missing file data(map)");
	if (g_c.player->f == 0)
		ft_err("player is missing");

	//////////////////////////////////////
	ft_store_array();
	printf("textures : \n");
	printf("no texture = |%s|\n",g_c.no);
	printf("so texture = |%s|\n",g_c.so);
	printf("we texture = |%s|\n",g_c.we);
	printf("ea texture = |%s|\n",g_c.ea);
	printf("s texture  = |%s|\n",g_c.s);
	printf("******************************\n");
	printf("colors are : \n");
	printf("floor color : |%u|\n",g_c.f);
	printf("ceiling color : |%u|\n",g_c.c);
	printf("******************************\n");
	printf("player : \n");
	printf("player x position = %f\n",g_c.player->x);
	printf("player y position = %f\n",g_c.player->y);
	printf("player rotation angle = %f\n",g_c.player->rota);
	printf("is north = %d\nis west = %d\nis east = %d\nis south = %d\n",g_c.player->n , g_c.player->w, g_c.player->e , g_c.player->s);
	printf("******************************\n");
	printf("map is : \n");
	ft_print_array();
	printf("******************************\n");
	

	ft_cast();

	ft_render_3d();
	
	mlx_put_image_to_window(g_c.mlx,g_c.mlx_win,g_c.img.im,0,0);
  
  
    mlx_loop(g_c.mlx);

	return(0);
}
