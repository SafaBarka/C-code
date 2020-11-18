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

int		ft_check_l(char *line, int i)
{
	char	**str;

	if (ft_check_b_l(line[0]))
		return (1);
	if (!(str = ft_split(line, ' ')))
		ft_err("failed to allocate memory");
	if (*str && g_c.nbrv != 8)
		ft_check_v(str);
	return (0);
}

void	ft_check_v(char **str)
{
	if (ft_strncmp(str[0], "R", 2) == 0)
		ft_check_r(str);
	else if (ft_strncmp(str[0], "NO", 2))
		ft_check_no(str);
	else if (ft_strncmp(str[0], "SO", 2))
		ft_check_so(str);
	else if (ft_strncmp(str[0], "WE", 2))
		ft_check_we(str);
	else if (ft_strncmp(str[0], "EA", 2))
		ft_check_ea(str);
	else if (ft_strncmp(str[0], "S", 2))
		ft_check_s(str);
	else if (ft_strncmp(str[0], "F", 2))
		ft_check_f(str);
	else if (ft_strncmp(str[0], "C", 2))
		ft_check_c(str);
	else
		ft_check_not_var(str);
}
