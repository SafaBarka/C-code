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

#include "cub3d.h"


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
void ft_store_sprite(int y, int x)
{
	t_sprit *sprite = malloc(sizeof(t_sprit));
	sprite->x = x * g_c.tw + (g_c.tw / 2) ;
	sprite->y = y * g_c.th + (g_c.th / 2);
	//if (g_c.sp == NULL)
	//	g_c.sp = ft_lstnew((void *)sprite);
	//else
		ft_lstadd_back(&g_c.sp, ft_lstnew((void *)sprite));

}
void ft_dist_sprite()
{
	t_list *tmp;

	tmp = g_c.sp;
	float dist = 0;
	while (tmp)
	{
		((t_sprit *)tmp->line)->dis = ft_calcul_distance(g_c.player.x, g_c.player.y ,
									((t_sprit *)tmp->line)->x,
									((t_sprit *)tmp->line)->y);
		
		tmp = tmp->next;
	}
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
	}//
	
	i = 0;
	while (j < g_c.ro)
	{
		while (i < g_c.co)
		{
			if (g_c.map[j][i] == '2')
			{
				printf("1");
				ft_store_sprite(j, i);
			}
			i++;
		}
		i = 0;
		j++;
	}
//	ft_dist_sprite();
	//t_list *tmp = g_c.sp;
	/*printf("%p", g_c.sp);
	while (tmp != NULL)
	{

		printf("x = |%d| y = |%d|\n", ((t_sprit *)tmp->line)->x,((t_sprit *)tmp->line)->y);
		tmp = tmp->next;
	}*/

}

//void ft_put_pixel_to_image(int x, int y , unsigned int color,int i)
void	sprite_pp(t_list *tmp, int i, int j)
{
	int color;

	color = g_c.t[4].addr[((int)g_c.t[4].w * (j * \
	(int)g_c.t[4].h /
			(int)((t_sprit *)tmp->line)->size)) + (i * (int)g_c.t[4].w /
			(int)((t_sprit *)tmp->line)->size)];
	if (color != 0)
	{
		ft_put_pixel_to_image( ((t_sprit *)tmp->line)->x_ofst + i ,((t_sprit *)tmp->line)->y_ofst + j, color,0);
	}
}
void	draw_sprite(t_list *tmp)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < ((t_sprit *)tmp->line)->size - 1)
	{
		if (((t_sprit *)tmp->line)->x_ofst + i < 0 ||
				((t_sprit *)tmp->line)->x_ofst + i > g_c.w)
			continue;
		if ((int)((t_sprit *)tmp->line)->x_ofst + i >= g_c.nbrr)
			continue;
		if (((t_sprit *)tmp->line)->dis > g_c.rays[(int)((t_sprit *)tmp->line)->x_ofst + i].dis)
			continue;
		j = -1;
		while (++j < ((t_sprit *)tmp->line)->size - 1)
		{
			if (((t_sprit *)tmp->line)->y_ofst + j < 0 ||
					((t_sprit *)tmp->line)->y_ofst + j > g_c.h)
				continue;
			sprite_pp(tmp, i,j );
		}
	}
}


void ft_render_sprite(t_list *tmp)
{
	float angle;
	angle = atan2(((t_sprit *)tmp->line)->y - g_c.player.y, ((t_sprit *)tmp->line)->x - g_c.player.x);
	while (angle - (g_c.player.rota) > M_PI)
		angle -= 2 * M_PI;
	while (angle - (g_c.player.rota) < -M_PI)
		angle += 2 * M_PI;
	angle = angle - (g_c.player.rota);
	if (g_c.h > g_c.w)
		((t_sprit *)tmp->line)->size = (g_c.h / ((t_sprit *)tmp->line)->dis) * g_c.tw;
	else
		((t_sprit *)tmp->line)->size = (g_c.w / ((t_sprit *)tmp->line)->dis) * g_c.tw;
	((t_sprit *)tmp->line)->y_ofst = (g_c.h / 2) - (((t_sprit *)tmp->line)->size / 2);
	((t_sprit *)tmp->line)->x_ofst = ((angle * g_c.w) / g_c.fov) +
		((g_c.w / 2) - (((t_sprit *)tmp->line)->size / 2));

	draw_sprite(tmp);
}
void ft_render_sprites()
{
	t_list *tmp;
	tmp = g_c.sp;
	ft_sort_list();
	while (tmp != NULL)
	{
		ft_render_sprite(tmp);
		tmp = tmp->next;
	}
}
void ft_render(void)
{
	ft_cast();
	ft_render_3d();
	ft_render_sprites();

}




void ft_init_turn_walk()
{
    g_c.player.turn = 0;
    g_c.player.walk = 0;
    g_c.player.lr = 0;
}

