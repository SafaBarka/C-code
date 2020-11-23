/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_txt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:36:39 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/18 18:41:14 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_err_ea(char **str)
{
	if (g_c.ea != NULL)
		ft_err("redefining variable 'EA' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'EA' parameters are not valid");
	g_c.ea = str[1];
	g_c.nbrv++;

	ft_check_txt_ea(g_c.ea);
}
char		*ft_s(char **s1, char **s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	
	if (*s1 == NULL || *s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(*s2)
						+ 2))))
		return (NULL);
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	str[i]=' ';
	i++;
	while ((*s2)[j] != '\0')
	{
		str[i] = (*s2)[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
void	ft_err_no(char **str)
{
	int i = 2;

	if (g_c.no != NULL)
		ft_err("redefining variable 'NO' in file");
	if (ft_nbr_split(str) == 1)
		ft_err("'NO' parameters are not valid");
	g_c.no = str[1];
	char *tmp;
	while (str[i])
	{
		tmp = ft_s(&g_c.no, &str[i]);
		g_c.no = tmp;
		i++;
	}
	printf("|%s|\n",g_c.no);
	ft_check_txt_no(g_c.no);
	g_c.nbrv++;
}

void	ft_err_so(char **str)
{
	if (g_c.so != NULL)
		ft_err("redefining variable 'SO' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'SO' parameters are not valid");
	g_c.so = str[1];
	g_c.nbrv++;
	ft_check_txt_so(g_c.so);
}

void	ft_err_we(char **str)
{
	if (g_c.we != NULL)
		ft_err("redefining variable 'WE' in file");
	else if (ft_nbr_split(str) != 2)
		ft_err("'WE' parameters are not valid");
	g_c.we = str[1];
	g_c.nbrv++;
	ft_check_txt_we(g_c.we);
}

void	ft_err_s(char **str)
{
	if (g_c.s != NULL)
		ft_err("redefining variable 'S' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'S' parameters are not valid");
	g_c.s = str[1];
	g_c.nbrv++;
	ft_check_txt_s(g_c.s);
}