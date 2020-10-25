/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:24:13 by sbarka            #+#    #+#             */
/*   Updated: 2019/11/18 14:21:54 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char **s1)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = ft_strlen(*s1);
	i = 0;
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (i < j)
	{
		str[i] = (*s1)[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		check_read(int v, char **str, char **line)
{
	if (!(*line = ft_strdup(str)))
		return (-1);
	free(*str);
	*str = NULL;
	return (v);
}

int		check(char **str)
{
	int i;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		check_str(int i, char **str, char **line)
{
	char *tmp;

	tmp = *str;
	if (!(*line = ft_substr(&tmp, 0, i - 1)))
		return (-1);
	if (tmp[i + 1] != '\0')
	{
		if (!(*str = ft_substr(&tmp, i + 1, ft_strlen(tmp) - 1)))
			return (-1);
	}
	else
		*str = NULL;
	free(tmp);
	return (1);
}
#include <stdio.h>
int		get_next_line(int fd, char **line)
{
	char			*buff;
	static char		*str[1024];
	int				i;
	int				v;

	if (ft_bzero(&str[fd], 1) == -1 || fd < 0 || BUFFER_SIZE < 0 || !line)
		return (-1);
	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (((check(&str[fd])) == -1) && (v = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[v] = '\0';
		if (!(str[fd] = ft_strjoin(&str[fd], &buff)))
			return (-1);
	}
	free(buff);
	i = check(&str[fd]);
	if (i != -1)
		return (check_str(i, &str[fd], line));
	return (check_read(v, &str[fd], line));
}
