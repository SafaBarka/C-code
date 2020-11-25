/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:53:23 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:58:49 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_store_array(void)
{
	int		r;
	t_list	*tmp;

	r = 0;
	g_c.co = g_c.ml;
	g_c.ro = ft_lst_size();
	//g_c.th = 64;
	//g_c.tw = 64;
	//g_c.player->x = g_c.player->x * g_c.tw + (g_c.tw / 2);
	//g_c.player->y = g_c.player->y * g_c.th - (g_c.th / 2);
	tmp = g_c.head;
	if (!(g_c.map = malloc((g_c.ro + 1) * sizeof(char *))))
		ft_err("memory problem");
	while (r < g_c.ro)
	{
		g_c.map[r] = ft_realloc(tmp->line, g_c.ml);
		tmp = tmp->next;
		r++;
	}
	g_c.map[r] = NULL;
}

void	ft_print_array(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_c.ro)
	{
		j = 0;
		printf("|");
		while (j < g_c.co)
		{
			printf("%c", g_c.map[i][j]);
			j++;
		}
		printf("|\n");
		i++;
	}
}
