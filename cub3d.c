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
	ft_init();
	ft_read_var(fd,i);
	if (g_c.nbrv != 8)
		ft_err("missing file data(variables)");
	while (g_c.i > 0 && g_c.line[0] == '\0')
		g_c.i = get_next_line(fd,&g_c.line);
	ft_read_map(fd,i);
	if (g_c.nbrl == 0 )
		ft_err("missing file data(map)");


	//////////////////////////////////////
	ft_store_array();

	printf("textures : \n");
	
	printf("no texture = |%s|\n",g_c.no);
	printf("so texture = |%s|\n",g_c.so);
	printf("we texture = |%s|\n",g_c.we);
	printf("ea texture = |%s|\n",g_c.ea);
	printf("s texture  = |%s|\n",g_c.s);

	printf("colors are : \n");
	printf("floor color : |%u|\n",g_c.f);
	printf("ceiling color : |%u|\n",g_c.c);
	printf("map is : \n");
	ft_print_array();
	////////////////////////////////////////
	return (0);
}
