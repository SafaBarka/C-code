/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_txt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:15:56 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/17 13:39:20 by sbarka           ###   ########.fr       */
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

char	*ft_realloc(char *line)
{
	char	*new;
	int		i;
	int		len;

	if (!(new = malloc(sizeof(char) * (g_c.ml + 1))))
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
		new[i] = ' ';
		i++;
	}
	new[i] = '\0';
	free(line);
	return (new);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, "Error\n", 6);
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}
