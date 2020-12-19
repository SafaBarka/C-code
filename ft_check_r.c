/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_r_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:10:02 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/19 13:45:08 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	*ft_differnt_zero(char *s)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i < len && s[i] == '0')
		i++;
	if (i != len)
		return (s + i);
	return (NULL);
}

void	ft_set_r(char **str)
{
	int		screenw;
	int		screenh;
	char	*diffz;

	mlx_get_screen_size(g_c.mlx, &screenw, &screenh);
	g_c.nbrv++;
	diffz = ft_differnt_zero(str[1]);
	if (ft_strlen(diffz) > 4)
		g_c.w = screenw;
	else
		g_c.w = ft_atoi(str[1]);
	diffz = ft_differnt_zero(str[2]);
	if (ft_strlen(diffz) > 4)
		g_c.h = screenh;
	else
		g_c.h = ft_atoi(str[2]);
	g_c.nbrr = (int)(g_c.w);
	if (!(g_c.rays = (t_ray *)malloc(sizeof(t_ray) * g_c.nbrr)))
		ft_err("memory problem");
}

void	ft_err_r(char **str)
{
	if (g_c.w != -1 && g_c.h != -1)
		ft_err("redefining variable 'R' in file");
	if (ft_nbr_split(str) != 3)
		ft_err("'R' parameters are not valid");
	if (ft_zeros(str[1]) || ft_zeros(str[2]))
		ft_err("'R' parameters must be > 0");
	if (!ft_is_number(str[1]) || !ft_is_number(str[2]))
		ft_err("'R' parameters are not valid");
}

void	ft_check_r(char **str)
{
	ft_err_r(str);
	ft_set_r(str);
	ft_init_mlx();
}
