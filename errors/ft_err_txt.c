/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:36:39 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 18:41:14 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_err_ea(char **str)
{
	if (g_c.ea != NULL)
		ft_err("defining variable  'EA' twice in the file");
	if (ft_nbr_split(str) != 2)
		ft_err("number of parameters are  != 1  (EA)");
}

void	ft_err_no(char **str)
{
	if (g_c.no != NULL)
		ft_err("defining variable  'NO' twice in the file");
	if (ft_nbr_split(str) != 2)
		ft_err("number of parameters are  != 1  (NO)");
}

void	ft_err_so(char **str)
{
	if (g_c.so != NULL)
		ft_err("defining variable  'SO' twice in the file");
	if (ft_nbr_split(str) != 2)
		ft_err("number of parameters are  != 1  (SO)");
}

void	ft_err_we(char **str)
{
	if (g_c.we != NULL)
		ft_err("defining variable  'WE' twice in the file");
	else if (ft_nbr_split(str) != 2)
		ft_err("number of parameters are  != 1  (WE)");
}
