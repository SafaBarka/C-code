/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:47:02 by sbarka            #+#    #+#             */
/*   Updated: 2019/11/18 09:35:38 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

char		*ft_strjoin(char **s1, char **s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (*s1 == NULL || *s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(*s2)
						+ 1))))
		return (NULL);
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	while ((*s2)[j] != '\0')
	{
		str[i] = (*s2)[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(*s1);
	return (str);
}

char		*ft_substr(char **s, int start, int len)
{
	char	*str;
	int		i;
	int		j;
	int		m;

	j = 0;
	if (*s == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (len - start + 2))))
		return (NULL);
	else
	{
		i = start;
		m = len - start + 1;
		while (j < m)
		{
			str[j] = ((char*)(*s))[i];
			i++;
			j++;
		}
	}
	str[j] = '\0';
	return (str);
}

int			ft_bzero(char **s, int len)
{
	int c;

	c = 0;
	if (*s == NULL)
	{
		if (!(*s = malloc(sizeof(char) * len)))
			c = -1;
		else
			*s[0] = '\0';
	}
	return (c);
}
