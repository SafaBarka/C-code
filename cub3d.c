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
	ft_read_map(fd,i);
	ft_store_array();
	ft_check_array();
	ft_check_spaces();
	ft_space_to_wall();
	ft_render();
}
void ft_space_to_wall()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_c.ro)
	{
		j = 0;
		while (j < g_c.co)
		{
			if(g_c.map[i][j] == ' ')
				g_c.map[i][j] = '1';
			j++;
		}
		i++;
	}
}
void ft_check_fl(char *line)
{
	int i = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '1')
			ft_err("not closed map");
		i++;
	}
}
void ft_check_ml(char *line)
{
	int i = 0;
	while (line[i] == ' ')
		i++;
	if (line[i] == '0')
		ft_err("not closed map");
	i = ft_strlen(line) - 1;	
	while(i >= 0 && line[i] == ' ')
		i--;
	if(i >= 0 && line[i] == '0')
		ft_err("not closed map");
}
void ft_check_array()
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < g_c.ro)
	{
		if (i == 0 || i == g_c.nbrl - 1)
			ft_check_fl(g_c.map[i]);
		else
			ft_check_ml(g_c.map[i]);
		
		i++;
	}
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
	mlx_put_image_to_window(g_c.mlx,g_c.mlx_win,g_c.img.im,0,0);
    mlx_hook(g_c.mlx_win, 2, 0, ft_deal_key, (void *)0);
    mlx_loop(g_c.mlx);
	return(0);
}

