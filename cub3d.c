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

#include "cub3d.h"

int	main(void)
{
	int fd;
	int i;

	fd = ft_op_f("infos.cub");
	//---------------------------------------
	if ((i = get_next_line(fd, &g_c.line)) < 0)
		ft_err("failed to read file");
	if (i == 0)
		ft_err("the file is empty");
	//------------------------------------
	ft_initialize_conf();
	//------------------------------------
	if(ft_r_v(fd ,i) == 1)
		ft_set_txt();
	//read variables

	//ft_re_f(fd);
	
	//if(g_c.fm == 0)
	//	ft_err("missing map");
	return (0);
}
