/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_r_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:46:13 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 18:13:55 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"



void	ft_set_r(char **str)
{
	g_c.nbrv++;
	g_c.w = ft_atoi(str[1]);
	g_c.h = ft_atoi(str[2]);
	g_c.nbrr = (int)(g_c.w);
}

void	ft_set_f(char *str)
{
	g_c.nbrv++;
	g_c.f = str;
	char **color;
	color = ft_split(str, ',');
	if (ft_nbr_split(color) != 3)
		ft_err("something wrong with floor color");
	int r = ft_atoi(color[0]);
	if ( r < 0 || r > 255)
		ft_err("something wrong with floor color");
	int g = ft_atoi(color[1]);
	if ( g < 0 || g > 255)
		ft_err("something wrong with floor color");
	int b = ft_atoi(color[2]);
	if ( g < 0 || g > 255)
		ft_err("something wrong with floor color");
	unsigned int floorcolor= create_trgb(0,r,g,b);
	printf("floor color = %u\n",floorcolor);
	printf("floor color = %u\n",0xDC6400);


}

void	ft_set_c(char **str)
{
	g_c.nbrv++;
	g_c.c = "";
}
int		create_trgb(int t, int r, int g, int b)
{
	return(t << 24 | r << 16 | g << 8 | b);
}