/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:13:56 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 17:05:45 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_swap(t_list *current, t_list *next)
{
	float swap;

	swap = 0;
	swap = ((t_sprit *)next->line)->dis;
	((t_sprit *)next->line)->dis = ((t_sprit *)current->line)->dis;
	((t_sprit *)current->line)->dis = swap;
	swap = ((t_sprit *)next->line)->x;
	((t_sprit *)next->line)->x = ((t_sprit *)current->line)->x;
	((t_sprit *)current->line)->x = swap;
	swap = ((t_sprit *)next->line)->y;
	((t_sprit *)next->line)->y = ((t_sprit *)current->line)->y;
	((t_sprit *)current->line)->y = swap;
}

void	ft_sort_list(void)
{
	t_list	*current;
	t_list	*next;
	float	swap;

	swap = 0;
	current = g_c.sp;
	while (current != NULL)
	{
		next = current->next;
		while (next != NULL)
		{
			if (((t_sprit *)next->line)->dis > ((t_sprit *)current->line)->dis)
				ft_swap(current, next);
			next = next->next;
		}
		current = current->next;
	}
}

void	ft_set_s(void)
{
	g_c.t[4].img = mlx_xpm_file_to_image(g_c.mlx,
										g_c.s,
										&g_c.t[4].w,
										&g_c.t[4].h);
	if (g_c.t[4].img == NULL)
		ft_err("something wrong with 'S' file");
	g_c.t[4].addr = (unsigned int *)mlx_get_data_addr(g_c.t[4].img,
													&g_c.t[4].bpp,
													&g_c.t[4].ll,
													&g_c.t[4].e);
}

int ft_exit(int i)
{
	if(g_c.mlx && g_c.img.im && g_c.mlx_win)
	{
		mlx_destroy_image(g_c.mlx, g_c.img.im);
		mlx_destroy_window(g_c.mlx, g_c.mlx_win);
	}
	if (g_c.map)
		ft_free_d(g_c.map);
	if (g_c.t)
		free(g_c.t);
	if (g_c.rays)
		free(g_c.rays);
	if (g_c.no)
		free(g_c.no);
	if (g_c.so)
		free(g_c.so);
	if (g_c.we)
		free(g_c.we);
	if (g_c.ea)
		free(g_c.ea);
	if (g_c.s)
		free(g_c.s);
	exit(i);
}
void	ft_err(char *message)
{
	ft_putstr_fd(message, 1);
	ft_exit(EXIT_SUCCESS);
}
