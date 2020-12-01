/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:24:23 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/23 18:24:24 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"


void	ft_read_var(int fd, int i)
{
	while ((g_c.i = get_next_line(fd, &g_c.line)) >= 0 && g_c.nbrv != 8)
	{
		ft_check_var(g_c.line, g_c.i);
		if (g_c.i == 0)
			break ;
		free(g_c.line);
	}
	if (g_c.i < 0)
		ft_err("something wrong with .cub file");
	if (g_c.nbrv == 8)
		ft_set_txts();
}
