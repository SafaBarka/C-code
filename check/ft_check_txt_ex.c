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
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid no");
	ft_set_no(s);
}

void	ft_check_txt_so(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid so");
	ft_set_so(s);
}

void	ft_check_txt_we(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid we");
	ft_set_we(s);
}

void	ft_check_txt_ea(char *s)
{
	int i;

	i = ft_strlen(s);
	if (i < 4 || ft_strncmp(".xpm", s + (i - 4), 5) != 0)
		ft_err("extension file not valid ea");
	ft_set_ea(s);
}
