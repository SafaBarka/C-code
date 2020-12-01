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
#include <string.h>
#include "cub3d.h"

void ft_read(int fd)
{
	int i;

	ft_read_var(fd,i);
	if (g_c.nbrv != 8)
		ft_err("missing file data(variables)");
	while ((g_c.i = get_next_line(fd,&g_c.line)) > 0 && g_c.line[0] == '\0')
		free(g_c.line);
	ft_read_map(fd,i);
	if (g_c.nbrl == 0 )
		ft_err("missing file data(map)");
	if (g_c.player->f == 0)
		ft_err("player is missing");
	ft_store_array();
	ft_check_spaces();
	ft_render();
}

void ft_render(void)
{
	ft_cast();
	ft_render_3d();
}

int	main(int argc, char *argv[])
{
	int fd;
	int i;

	if (argc == 1)
		ft_err("file name is missing");
	fd = ft_op_f(argv[1]);
	ft_init();
	ft_read(fd);
	ft_check_save(argc,argv);
	system("leaks a.out");
	mlx_put_image_to_window(g_c.mlx,g_c.mlx_win,g_c.img.im,0,0);
    mlx_hook(g_c.mlx_win, 2, 0, ft_deal_key, (void *)0);
    mlx_loop(g_c.mlx);
	return(0);
}

