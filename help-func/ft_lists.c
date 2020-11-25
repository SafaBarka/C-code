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

void	ft_lstadd_back(t_list *alst, t_list *new)
{
	t_list *lst;

	if (alst == NULL)
		alst = new;
	else if (alst && new)
	{
		lst = ft_lstlast(alst);
		lst->next = new;
	}
}

t_list	*ft_lstnew(char *line)
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
