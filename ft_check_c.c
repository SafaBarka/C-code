/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 17:44:15 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/20 10:26:22 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_nbr_comma(char *s)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (s[i])
	{
		if (s[i] == ',')
			sum++;
		i++;
	}
	return (sum);
}

void	ft_trim_split_c(void)
{
	char *tmp;

	if (g_c.c != -1)
		ft_err("redefining variable 'C' in file");
	tmp = ft_strtrim(g_c.line, " ");
	if (!(g_c.rgb.trim = ft_strtrim(tmp + 1, " ")))
		ft_err("memory problem");
	if (ft_nbr_comma(g_c.line + 1) != 2)
		ft_err("invalid parameters for ceiling color");
	if (!(g_c.rgb.color = ft_split(g_c.rgb.trim, ',')))
		ft_err("memory problem");
	if (ft_nbr_split(g_c.rgb.color) != 3)
		ft_err("ceiling color nbr  parameters are not valid");
	free(tmp);
}

void	ft_check_c(void)
{
	g_c.nbrv++;
	ft_trim_split_c();
	g_c.rgb.tmp = (char *)ft_strtrim(g_c.rgb.color[0], " ");
	if (ft_is_number(g_c.rgb.tmp) == 0)
		ft_err("ceiling color is not valid arg1");
	g_c.rgb.r = ft_atoi(g_c.rgb.tmp);
	free(g_c.rgb.tmp);
	g_c.rgb.tmp = (char *)ft_strtrim(g_c.rgb.color[1], " ");
	if (ft_is_number(g_c.rgb.tmp) == 0)
		ft_err("ceiling color is not valid arg2");
	g_c.rgb.g = ft_atoi(g_c.rgb.tmp);
	free(g_c.rgb.tmp);
	g_c.rgb.tmp = (char *)ft_strtrim(g_c.rgb.color[2], " ");
	if (ft_is_number(g_c.rgb.tmp) == 0)
		ft_err("ceiling color is not valid arg3");
	g_c.rgb.b = ft_atoi(g_c.rgb.tmp);
	free(g_c.rgb.tmp);
	if (g_c.rgb.r < 0 || g_c.rgb.r > 255 || g_c.rgb.g < 0
			|| g_c.rgb.g > 255 || g_c.rgb.b < 0 || g_c.rgb.b > 255)
		ft_err("something wrong with ceiling color");
	g_c.c = ft_create_trgb(0, g_c.rgb.r, g_c.rgb.g, g_c.rgb.b);
	ft_free_d(g_c.rgb.color);
	free(g_c.rgb.trim);
}
