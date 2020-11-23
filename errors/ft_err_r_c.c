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
	if (g_c.c != -1)
		ft_err("redefining variable 'C' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'C' parameters are not valid");
}

void	ft_err_f(char **str)
{
	if (g_c.f != -1)
		ft_err("redefining variable 'F' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'F' parameters are not valid");

}

void	ft_err_r(char **str)
{
	if (g_c.w != -1 && g_c.h != -1)
		ft_err("redefining variable 'R' in file");
	if (ft_nbr_split(str) != 3)
		ft_err("'R' parameters are not valid");
	if (ft_zeros(str[1]) || ft_zeros(str[2]))
		ft_err("'R' parameters are not valid");
	if (!ft_is_number(str[1]) || !ft_is_number(str[2]))
		ft_err("'R' parameters are not valid");
}


