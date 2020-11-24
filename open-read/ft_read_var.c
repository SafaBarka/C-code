/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_v.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:22:53 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/17 11:22:55 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_read_var(int fd, int i)
{
	while ((g_c.i = get_next_line(fd, &g_c.line)) >= 0 && g_c.nbrv != 8)
	{
		ft_check_var(g_c.line, g_c.i);
		free(g_c.line);
		if (g_c.i == 0)
			break ;
	}
	if (g_c.i < 0)
		ft_err("something wrong with .cub file");
	if (g_c.nbrv == 8)
		ft_set_txt();

}
