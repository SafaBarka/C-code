/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_wall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:28:26 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/26 14:32:14 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_has_wall(float x, float y)
{
	int a;
	int b;
	int c;

	if (x < 0 || x > g_c.temp_w || y < 0 || y > g_c.temp_h)
		return (1);
	a = floor(x / g_c.tw);
	b = floor(y / g_c.th);
	return (g_c.map[b][a]);
}
