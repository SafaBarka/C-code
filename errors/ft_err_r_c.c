/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_r_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:32:08 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 16:40:00 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_err_c(char **str)
{
	if (g_c.c != NULL)
		ft_err("redefining variable'C'in file");
	if (ft_nbr_split(str) != 2)
		ft_err("invalid number of parameters for 'C' var");
}

void	ft_err_f(char **str)
{
	if (g_c.f != NULL)
		ft_err("defining variable  'F' twice in the file");
	if (ft_nbr_split(str) != 2)
		ft_err("number of parameters are  != 1  (F)");
}

void	ft_err_r(char **str)
{
	if (g_c.w != -1 && g_c.h != -1)
		ft_err("defining variable  'R' twice in the file");
	if (ft_nbr_split(str) != 3)
		ft_err("number of parameters are  != 2  (R)");
	if (ft_zeros(str[1]) || ft_zeros(str[2]))
		ft_err("the width and height must be != 0");
	if (!ft_is_number(str[1]) || !ft_is_number(str[2]))
		ft_err("R 's parameters are not valid numbers");
}

void	ft_err_s(char **str)
{
	if (g_c.s != NULL)
		ft_err("defining variable  'S' twice in the file");
	if (ft_nbr_split(str) != 2)
		ft_err("number of parameters are  != 2  (S)");
}
