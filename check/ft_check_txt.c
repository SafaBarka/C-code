/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_txt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:47:05 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 18:48:38 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_check_no(char **str)
{
	ft_err_no(str);
	ft_set_no(str);
}

void	ft_check_so(char **str)
{
	ft_err_so(str);
	ft_set_so(str);
}

void	ft_check_we(char **str)
{
	ft_err_we(str);
	ft_set_we(str);
}

void	ft_check_ea(char **str)
{
	ft_err_ea(str);
	ft_set_ea(str);
}
