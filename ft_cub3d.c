/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cub3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:22:49 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/17 13:02:46 by sbarka           ###   ########.fr       */
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

void	ft_read(int fd)
{
	ft_read_var(fd);
	ft_read_map(fd);
	ft_store_array();
	ft_free_list();
	ft_check_array();
	ft_check_spaces();
	ft_space_to_wall();
	ft_render();
}

void	ft_check_file_ex(char *filename)
{
	int i;

	i = ft_strlen(filename);
	if (i < 4 || (ft_strncmp(".cub", filename + (i - 4), 5) != 0))
		ft_err("file extension must be (.cub)");
}

int		ft_exit(void)
{
	mlx_destroy_image(g_c.mlx, g_c.img.im);
	mlx_destroy_window(g_c.mlx, g_c.mlx_win);
	free_exit();
	exit(EXIT_SUCCESS);
}

int		main(int argc, char *argv[])
{
	int	fd;

	if (argc == 1)
		ft_err("file name is missing");
	if (argc > 3)
		ft_err("invalid number of arguments");
	if (argc == 3 && ft_strncmp(argv[2], "--save", 7) != 0)
		ft_err("second argument must be (--save)");
	ft_check_file_ex(argv[1]);
	fd = ft_op_f(argv[1]);
	ft_init();
	ft_read(fd);
	if (argc == 3 && ft_strncmp(argv[2], "--save", 7) == 0)
		ft_save();
	mlx_put_image_to_window(g_c.mlx, g_c.mlx_win, g_c.img.im, 0, 0);
	mlx_hook(g_c.mlx_win, 2, 0, ft_deal_key, (void *)0);
	mlx_hook(g_c.mlx_win, 3, 0, ft_init_turn_walk, (void *)0);
	mlx_hook(g_c.mlx_win, 17, 0, ft_exit, (void *)0);
	mlx_loop_hook(g_c.mlx, ft_update, NULL);
	mlx_loop(g_c.mlx);
	return (0);
}
