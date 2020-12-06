/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:25:15 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/17 09:29:34 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_op_f(char *filename)
{
	int	fd;

	if ((fd = open(filename, O_RDONLY)) < 0)
    {
		ft_err("failed to open file");
    }
	return (fd);
}

int ft_deal_key(int key, void *param)
{
    ft_init_turn_walk();
    if (key == 2 )//D //walk to left
    {
       g_c.player->lr = -1;
    }
    else if (key == 0)//A //walk to right
 
       g_c.player->lr = +1;
     
    if ( key == 126 || key == 13) //up w
        g_c.player->walk = +1;
    else if(key == 125 || key == 1) // down s
        g_c.player->walk = -1;
    else if(key == 124) //right
        g_c.player->turn = +1;
    else if( key == 123)//left
        g_c.player->turn = -1;
    else if (key == 53 ) //esc
    {
        mlx_destroy_window(g_c.mlx,g_c.mlx_win);
        exit(EXIT_SUCCESS);
    }
 
    ft_update();
    return 1;
}

void ft_init_turn_walk()
{
    g_c.player->turn = 0;
    g_c.player->walk = 0;
    g_c.player->lr = 0;
}

void	ft_err(char *message)
{
    
	ft_putstr_fd(message, 1);
	exit(EXIT_FAILURE);
}

int ft_has_wall(float x, float y)
{
    
    if (x < 0 || x > g_c.temp_w|| y < 0 || y > g_c.temp_h) {
            return 1;
        }
     int a = floor(x / g_c.tw );
     int b = floor(y /g_c.th);
    int c = g_c.map[b][a];
    return c;
}