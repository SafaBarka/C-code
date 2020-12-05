/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:20:11 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:25:21 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

char	*ft_realloc(char *line, int max_length)
{
	char	*new;
	int		i;
	int		len;

	if(!(new = malloc(sizeof(char) * (g_c.ml + 1))))
		ft_err("memory problem");
	i = 0;
	len = ft_strlen(line);
	while (i < len)
	{
		new[i] = line[i];
		i++;
	}
	while (i < g_c.ml)
	{
		new[i] = '1';
		i++;
	}
	new[i] = '\0';
	free(line);
	return (new);
}
