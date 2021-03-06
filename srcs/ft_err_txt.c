/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:36:39 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/19 13:40:48 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_err_ea(char **str)
{
	int		i;
	char	*tmp;

	i = 2;
	if (g_c.ea != NULL)
		ft_err("redefining 'EA' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'EA' parameters are not valid");
	tmp = ft_strtrim(g_c.line, " ");
	g_c.ea = ft_strtrim(tmp + 3, " ");
	free(tmp);
	g_c.nbrv++;
}

void	ft_err_no(char **str)
{
	int		i;
	char	*tmp;

	i = 2;
	if (g_c.no != NULL)
		ft_err("redefining 'NO' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'NO' parameters are not valid");
	tmp = ft_strtrim(g_c.line, " ");
	g_c.no = ft_strtrim(tmp + 3, " ");
	free(tmp);
	g_c.nbrv++;
}

void	ft_err_so(char **str)
{
	int		i;
	char	*tmp;

	i = 2;
	if (g_c.so != NULL)
		ft_err("redefining 'SO' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'SO' parameters are not valid");
	tmp = ft_strtrim(g_c.line, " ");
	g_c.so = ft_strtrim(tmp + 3, " ");
	free(tmp);
	g_c.nbrv++;
}

void	ft_err_we(char **str)
{
	int		i;
	char	*tmp;

	i = 2;
	if (g_c.we != NULL)
		ft_err("redefining 'WE' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'WE' parameters are not valid");
	tmp = ft_strtrim(g_c.line, " ");
	g_c.we = ft_strtrim(tmp + 3, " ");
	free(tmp);
	g_c.nbrv++;
}

void	ft_err_s(char **str)
{
	int		i;
	char	*tmp;

	i = 2;
	if (g_c.s != NULL)
		ft_err("redefining 'S' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'S' parameters are not valid");
	tmp = ft_strtrim(g_c.line, " ");
	g_c.s = ft_strtrim(tmp + 2, " ");
	free(tmp);
	g_c.nbrv++;
}
