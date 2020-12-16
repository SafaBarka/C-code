/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 13:36:59 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/16 13:40:49 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free_d(char **str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
	}
	free(str);
}

void	ft_free_list(void)
{
	t_list *tmp;

	while (g_c.head != NULL)
	{
		tmp = g_c.head;
		g_c.head = g_c.head->next;
		free(tmp);
	}
	free(g_c.head);
}

void	free_exit(void)
{
	ft_free_d(g_c.map);
	free(g_c.t);
	free(g_c.rays);
	free(g_c.no);
	free(g_c.so);
	free(g_c.we);
	free(g_c.ea);
	free(g_c.s);
}
