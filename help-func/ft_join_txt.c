/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_txt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:15:56 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/25 16:18:59 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

char	*ft_join_txt(char **s1, char **s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(*s2)
						+ 2))))
		return (NULL);
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	str[i] = ' ';
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
