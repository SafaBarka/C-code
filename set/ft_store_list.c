/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:41:16 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/22 10:44:43 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_store_list(void)
{
	if (!g_c.head)
		g_c.fm = 1;
	int		len;
	char	*new;
	int		i;
	len = ft_strlen(g_c.line);
	i = 0;
	if (!(new = malloc(sizeof(char ) * (len + 1))))
		ft_err("memory problem");
	while (i < len)
	{
		new[i] = g_c.line[i];
		i++;
	}
	new[i] = '\0';
	if (g_c.head == NULL)
	{
		g_c.ml = len;
		if (!(g_c.head = ft_lstnew(new)))
			ft_err("memory problem");
	}
	else 
	{
		if (len >= g_c.ml)
			g_c.ml = len;
		ft_lstadd_back(g_c.head, ft_lstnew(new));
	}
}
