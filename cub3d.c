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

	fd = ft_op_f("infos.cub");// open file =>if it failed return an error
	ft_init();//initialize configuration; initailize mlx , player , texture , conf
	ft_read_var(fd,i);//read first part of the file + check errors
	ft_read_map(fd,i);
	return (0);
}
