/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 09:39:42 by sbarka            #+#    #+#             */
/*   Updated: 2019/11/18 09:46:03 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char **s1, char **s2);
int		get_next_line(int fd, char **line);
char	*ft_substr(char **s, int start, int len);
int		check(char **str);
int		check_read(int v, char **str, char **line);
int		check_str(int i, char **str, char **line);
size_t	ft_strlen(const char *s);
int		ft_bzero(char **s, int len);
char	*ft_strdup(char **s1);
#endif
