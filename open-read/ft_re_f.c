/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:22:53 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/17 11:22:55 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_re_f(int fd)
{
	int		i;
	char	*line;

	if ((i = get_next_line(fd, &line)) < 0)
		ft_err("failed to read file");
	if (i == 0)
		ft_err("the file is empty");
	ft_initialize_conf();
	while (i > 0)
	{
		ft_check_l(line, i);
		free(line);
		i = get_next_line(fd, &line);
	}
	if (i < 0)
		ft_err("failed to read file");
	ft_check_l(line, i);
	free(line);
}
