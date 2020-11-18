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

void	ft_set_s(char **str)
{
	g_c.nbrv++;
	g_c.s = "";
}

void	ft_set_r(char **str)
{
	g_c.nbrv++;
	g_c.w = ft_atoi(str[1]);
	g_c.h = ft_atoi(str[2]);
	g_c.nbrr = (int)(g_c.w);
}

void	ft_set_f(char **str)
{
	g_c.nbrv++;
	g_c.f = "";
}

void	ft_set_c(char **str)
{
	g_c.nbrv++;
	g_c.c = "";
}
