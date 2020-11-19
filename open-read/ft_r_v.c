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

int	ft_r_v(int fd, int i)
{
	while (i > 0)
	{
		if (g_c.nbrv == 8)
			return (1);
		ft_check_l(g_c.line, i);
		free(g_c.line);
		i = get_next_line(fd, &g_c.line);
	}
	if (i < 0)
		ft_err("failed to read file");
	if (g_c.nbrv != 8)
		ft_err("missing file variables");
	return (0);
}
