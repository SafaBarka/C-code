/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:36:39 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:09:05 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_err_ea(char **str)
{
	int i;

	i = 2;
	if (g_c.ea != NULL)
		ft_err("redefining variable 'EA' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'EA' parameters are not valid");
	g_c.ea = str[1];
	while (str[i])
	{
		g_c.ea = ft_join_txt(&g_c.ea, &str[i]);
		i++;
	}
	g_c.nbrv++;
	ft_check_txt_ea(g_c.ea);
}

void	ft_err_no(char **str)
{
	int i;
	i = 2;
	if (g_c.no != NULL)
		ft_err("redefining variable 'NO' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'NO' parameters are not valid");
	g_c.no = str[1];
	while (str[i])
	{
		g_c.no = ft_join_txt(&g_c.no, &str[i]);
		i++;
	}
	ft_check_txt_no(g_c.no);
	g_c.nbrv++;
}

void	ft_err_so(char **str)
{
	int i;

	i = 2;
	if (g_c.so != NULL)
		ft_err("redefining variable 'SO' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'SO' parameters are not valid");
	g_c.so = str[1];
	while (str[i])
	{
		g_c.so = ft_join_txt(&g_c.so, &str[i]);
		i++;
	}
	g_c.nbrv++;
	ft_check_txt_so(g_c.so);
}

void	ft_err_we(char **str)
{
	int i;

	i = 2;
	if (g_c.we != NULL)
		ft_err("redefining variable 'WE' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'WE' parameters are not valid");
	g_c.we = str[1];
	while (str[i])
	{
		g_c.we = ft_join_txt(&g_c.we, &str[i]);
		i++;
	}
	g_c.nbrv++;
	ft_check_txt_we(g_c.we);
}

void	ft_err_s(char **str)
{
	int i;

	i = 2;
	if (g_c.s != NULL)
		ft_err("redefining variable 'S' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'S' parameters are not valid");
	g_c.s = str[1];
	while (str[i])
	{
		g_c.s = ft_join_txt(&g_c.s, &str[i]);
		i++;
	}
	g_c.nbrv++;
	ft_check_txt_s(g_c.s);
}
