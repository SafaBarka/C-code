/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:50:56 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 18:53:06 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_set_we(char **str)
{
	g_c.nbrv++;
	g_c.we = "";
}

void	ft_set_so(char **str)
{
	g_c.nbrv++;
	g_c.so = "";
}

void	ft_set_no(char **str)
{
	g_c.nbrv++;
	g_c.no = "";
}

void	ft_set_ea(char **str)
{
	g_c.nbrv++;
	g_c.ea = "";
}
