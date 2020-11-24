/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_not_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:29:52 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 20:36:12 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_check_not_var(char **str)
{
	if (ft_strncmp(str[0], "R", 2) != 0 &&
		ft_strncmp(str[0], "S", 2) != 0 &&
		ft_strncmp(str[0], "F", 2) != 0 &&
		ft_strncmp(str[0], "C", 2) != 0 &&
		ft_strncmp(str[0], "NO", 2) != 0 &&
		ft_strncmp(str[0], "SO", 2) != 0 &&
		ft_strncmp(str[0], "WE", 2) != 0 &&
		ft_strncmp(str[0], "EA", 2) != 0)
		ft_err("variable name not valid in file");
}
