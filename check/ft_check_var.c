/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:38:43 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 20:26:41 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_check_var(char *line, int i)
{
	char	**str;

	if (ft_check_b_l(line[0]))
		return (1);
	if (!(str = ft_split(line, ' ')))
		ft_err("memory problem");
	if (*str)
		ft_check_v(str);
	ft_free_d(str);
	return (0);

}

void	ft_check_v(char **str)
{
	if (ft_strncmp(str[0], "R", 2) == 0)
		ft_check_r(str);
	else if (ft_strncmp(str[0], "NO", 2) == 0)
		ft_err_no(str);
	else if (ft_strncmp(str[0], "SO", 2) == 0)
		ft_err_so(str);
	else if (ft_strncmp(str[0], "WE", 2) == 0)
		ft_err_we(str);
	else if (ft_strncmp(str[0], "EA", 2) == 0)
		ft_err_ea(str);
	else if (ft_strncmp(str[0], "S", 2) == 0)
		ft_err_s(str);
	else if (ft_strncmp(str[0], "F", 2) == 0)
		ft_check_f(str);
	else if (ft_strncmp(str[0], "C", 2) == 0)
		ft_check_c(str);
	else
		ft_check_not_var(str);

}
