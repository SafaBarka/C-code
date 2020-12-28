/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:53:23 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/17 13:36:04 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_store_array(void)
{
	int		r;
	t_list	*tmp;

	r = 0;
	g_c.co = g_c.ml;
	g_c.ro = ft_lst_size();
	g_c.th = 64;
	g_c.tw = 64;
	g_c.player.x = g_c.player.x * g_c.tw + 25;//(g_c.tw / 2);
	g_c.player.y = g_c.player.y * g_c.th - 25;//(g_c.th / 2);
	tmp = g_c.head;
	if (!(g_c.map = malloc((g_c.ro + 1) * sizeof(char *))))
		ft_err("memory problem");
	while (r < g_c.ro)
	{
		g_c.map[r] = ft_realloc(tmp->line);
		tmp = tmp->next;
		r++;
	}
	g_c.map[r] = NULL;
}

void	ft_store_list(void)
{
	int		len;
	char	*new;
	int		i;

	if (!g_c.head)
		g_c.fm = 1;
	len = ft_strlen(g_c.line);
	i = -1;
	if (!(new = malloc(sizeof(char ) * (len + 1))))
		ft_err("memory problem");
	while (++i < len)
		new[i] = g_c.line[i];
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
		ft_lstadd_back(&g_c.head, ft_lstnew(new));
	}
}
