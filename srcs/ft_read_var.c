/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:24:23 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/11 14:39:25 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_check_b_l(char c)
{
	if (c == '\0')
		return (1);
	return (0);
}

void	ft_check_not_var(char **str)
{
	if (ft_strncmp(str[0], "R", 2) != 0 &&
		ft_strncmp(str[0], "S", 2) != 0 &&
		ft_strncmp(str[0], "F", 2) != 0 &&
		ft_strncmp(str[0], "C", 2) != 0 &&
		ft_strncmp(str[0], "NO", 3) != 0 &&
		ft_strncmp(str[0], "SO", 3) != 0 &&
		ft_strncmp(str[0], "WE", 3) != 0 &&
		ft_strncmp(str[0], "EA", 3) != 0)
	{
		ft_err("element not valid in file");
	}
}

void	ft_check_var(char **str)
{
	if (ft_strncmp(str[0], "R", 2) == 0)
		ft_check_r(str);
	else if (ft_strncmp(str[0], "NO", 3) == 0)
		ft_err_no(str);
	else if (ft_strncmp(str[0], "SO", 3) == 0)
		ft_err_so(str);
	else if (ft_strncmp(str[0], "WE", 3) == 0)
		ft_err_we(str);
	else if (ft_strncmp(str[0], "EA", 3) == 0)
		ft_err_ea(str);
	else if (ft_strncmp(str[0], "S", 2) == 0)
		ft_err_s(str);
	else if (ft_strncmp(str[0], "F", 2) == 0)
		ft_check_f();
	else if (ft_strncmp(str[0], "C", 2) == 0)
		ft_check_c();
	else
		ft_check_not_var(str);
}

int		ft_check_vars(char *line)
{
	char	**str;

	if (ft_check_b_l(line[0]))
		return (1);
	if (!(str = ft_split(line, ' ')))
		ft_err("memory problem");
	if (*str)
		ft_check_var(str);
	ft_free_d(str);
	return (0);
}

void	ft_read_var(int fd)
{
	while ((g_c.i = get_next_line(fd, &g_c.line)) >= 0 && g_c.nbrv != 8)
	{
		ft_check_vars(g_c.line);
		free(g_c.line);
		if (g_c.i == 0)
			break ;
	}
	while (g_c.i > 0 && g_c.line[0] == '\0')
	{
		free(g_c.line);
		g_c.i = get_next_line(fd, &g_c.line);
	}
	if (g_c.i < 0)
		ft_err("failed to read .cub file");
	if (g_c.nbrv == 8)
		ft_set_txts();
	if (g_c.nbrv != 8)
		ft_err("file data is missing");
}
