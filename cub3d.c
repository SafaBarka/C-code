/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:18:53 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/07 12:20:29 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_op_f(char *filename)
{
	int	fd;

	if ((fd = open(filename, O_RDONLY)) < 0)
		ft_err("failed to open file");
	return (fd);
}

int		ft_deal_key(int key, void *param)
{
	ft_init_turn_walk();
	if (key == 2)
		g_c.player->lr = -1;
	else if (key == 0)
		g_c.player->lr = +1;
	if (key == 126 || key == 13)
		g_c.player->walk = +1;
	else if (key == 125 || key == 1)
		g_c.player->walk = -1;
	else if (key == 124)
		g_c.player->turn = +1;
	else if (key == 123)
		g_c.player->turn = -1;
	else if (key == 53)
	{
		mlx_destroy_window(g_c.mlx, g_c.mlx_win);
		exit(EXIT_SUCCESS);
	}
	ft_update();
	return (1);
}

void	ft_read(int fd)
{
	int i;

	ft_read_var(fd, i);
	ft_read_map(fd, i);
	ft_store_array();
	ft_free_list();
	ft_check_array();
	ft_check_spaces();
	ft_space_to_wall();
	ft_render();
}
void ft_check_save(int argc,char *argv[])
{
    int i;
    
    i = 2;
    while (argv[i])
    {
       if (ft_strncmp(argv[i],"--save",7) == 0)
       {
          ft_save();
          exit(EXIT_SUCCESS);
       }
       i++;
    }
    
}

int		main(int argc, char *argv[])
{
	int	fd;
	int	i;

	if (argc == 1)
		ft_err("file name is missing");
	fd = ft_op_f(argv[1]);
	ft_init();
	ft_read(fd);
	ft_check_save(argc, argv);
	mlx_put_image_to_window(g_c.mlx, g_c.mlx_win, g_c.img.im, 0, 0);
	mlx_hook(g_c.mlx_win, 2, 0, ft_deal_key, (void *)0);
	mlx_loop(g_c.mlx);
	return (0);
}


