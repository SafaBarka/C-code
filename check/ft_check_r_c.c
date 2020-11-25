/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_r_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:10:02 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 13:33:16 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_check_r(char **str)
{
	ft_err_r(str);
	ft_set_r(str);
}

void	ft_check_c(char **str)
{
	ft_err_c(str);
	ft_set_c(str[1]);
}

void	ft_check_f(char **str)
{
	ft_err_f(str);
	ft_set_f(str[1]);
}
