/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:35:08 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:27:28 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}

int		ft_lst_size(void)
{
	t_list	*tmp;
	int		i;

	tmp = g_c.head;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	/*t_list *lst;

	if (alst == NULL)
		alst = new;
	else if (alst && new)
	{
		lst = ft_lstlast(alst);
		lst->next = new;
	}*/

	t_list *lst;

	if (*alst == NULL)
		*alst = new;
	else if (*alst && new)
	{
		lst = ft_lstlast(*alst);
		lst->next = new;
	}
}
/*
void	ft_calcul_dist(void)
{
	t_list	*curr;
	int		x;
	int		y;

	curr = g_conf.sprite_head;
	while (curr)
	{
		x = ((t_sprit *)curr->content)->x;
		y = ((t_sprit *)curr->content)->y;
		((t_sprit *)curr->content)->dis = distance_between(g_player.pos.x, \
		g_player.pos.y, x, y);
		curr = curr->next;
	}
}
*/
t_list	*ft_lstnew(void *line)
{
	t_list *element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	element->line = line;
	element->next = NULL;
	return (element);
}

void	ft_print_list(t_list *head)
{
	t_list *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		printf("line = |%s|\n", tmp->line);
		tmp = tmp->next;
	}
}

/*void	ft_print_list(t_list *head)
{
	t_list *tmp;
	tmp = head;
	while(tmp != NULL)
	{
		t_sprit  sp = tmp->(t_sprit)line;
		printf("x = |%d|\n",(t_sprit)tmp->line->x)
	}
}*/
