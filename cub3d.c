/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:18:53 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/11 14:34:38 by sbarka           ###   ########.fr       */
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
	int i;

	ft_read_var(fd, i);//read the first of part of file
	ft_read_map(fd, i);//read the map
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
		ft_err("file extension not valid");
}

int		ft_exit(void)
{
	mlx_destroy_image(g_c.mlx, g_c.img.im);
	mlx_destroy_window(g_c.mlx, g_c.mlx_win);
	exit(EXIT_SUCCESS);
}

int		main(int argc, char *argv[])
{
	int	fd;
	int	i;

	if (argc == 1)//check if file name is missing
		ft_err("file name is missing");
	ft_check_file_ex(argv[1]);//check if the file has extension .cub
	fd = ft_op_f(argv[1]);//open the file
	ft_init(); //initialize configuration
	ft_read(fd);
	if (argc >= 3 && ft_strncmp(argv[2], "--save", 7) == 0)
		ft_check_save(argc, argv);
	system("leaks a.out");
	mlx_put_image_to_window(g_c.mlx, g_c.mlx_win, g_c.img.im, 0, 0);
	mlx_hook(g_c.mlx_win, 2, 0, ft_deal_key, (void *)0);
	mlx_hook(g_c.mlx_win, 17, 1L << 17, ft_exit, (void *)0);
	mlx_loop(g_c.mlx);
	return (0);
}
