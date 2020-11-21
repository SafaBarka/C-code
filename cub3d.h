/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:12:48 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/17 20:36:27 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <mlx.h>
# include "help-func/get_next_line/get_next_line.h"

typedef	struct		s_image{
	void			*im;
	unsigned int	*addr;
	int				bpp;
	int				ll;
	int				e;
}					t_image;

typedef	struct		s_list{
	char			*line;
	struct t_list	*next;
}					t_list;

typedef struct		s_ray{
	float			a;
	int				d;
	int				u;
	int				r;
	int				l;
	float			xi;
	float			yi;
	float			xs;
	float			ys;
	int				fh;
	float			hx;
	float			hy;
	int				fv;
	float			vx;
	float			vy;
	float			dis;
	float			wx;
	float			wy;
}					t_ray;
t_ray				g_ray;

typedef struct		s_player{
	float			x;
	float			y;
	int				n;
	int				s;
	int				e;
	int				w;
	int				f;
	int				turn;
	int				walk;
	float			rota;
	float			mvs;
	float			rots;
	float			rad;
}					t_player;
t_player			g_pl;

typedef struct		s_texture{
	int				w;
	int				h;
	unsigned int	*addr;
	int				bpp;
	int				ll;
	int				e;
	void			*img;
}					t_texture;


typedef	struct		s_config{
	char			*line;
	void			*mlx;
	void			*mlx_win;
	t_image			img;
	int				w;
	int				h;
	int				tw;
	int				th;
	int				co;
	int				ro;
	char			*no;
	char			*so;
	char			*we;
	char			*ea;
	char			*s;
	char			*c;
	char			*f;
	int				ml;
	int				ll;
	int				fm;
	int				nbrv;
	int				nbrl;
	char			**map;
	t_list			*head;
	double			fov;
	int				nbrr;
	int				temp_w;
	int				temp_h;
	t_player		*player;
	t_texture		*t;
}					t_config;
t_config			g_c;

void				ft_err(char *message);
int					ft_op_f(char *filename);
int					ft_r_v(int fd, int i);
int					ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_check_l(char *line, int i);
int					ft_check_b_l(char c);
void				ft_check_v(char **str);
void				ft_check_r(char **str);
void				ft_check_c(char **str);
void				ft_check_f(char **str);
void				ft_check_s(char **str);
void				ft_err_c(char **str);
void				ft_err_f(char **str);
void				ft_err_r(char **str);
void				ft_err_s(char **str);
void				ft_err_ea(char **str);
void				ft_err_no(char **str);
void				ft_err_so(char **str);
void				ft_err_we(char **str);
void				ft_set_s(char **str);
void				ft_set_r(char **str);
void				ft_set_f(char **str);
void				ft_set_c(char **str);
int					ft_nbr_split(char **str);
void				ft_check_not_var(char **str);
int					ft_is_number(char *s);
int					ft_zeros(char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_check_txt_no(char *s);
void				ft_check_txt_so(char *s);
void				ft_check_txt_we(char *s);
void				ft_check_txt_ea(char *s);
void				ft_initialize_conf(void);
void				ft_initialize_mlx(void);
void				ft_set_txt();
#endif