/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_txt_ex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:00:32 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/19 13:32:15 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_check_txt_no(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || (ft_strncmp(".xpm", s + (i - 4), 5) != 0))
		ft_err("extension file not valid no");
}

void	ft_check_txt_so(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid so");
}

void	ft_check_txt_we(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid we");
}

void	ft_check_txt_ea(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid ea");
}
