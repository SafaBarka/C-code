/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:12:48 by sbarka            #+#    #+#             */
/*   Updated: 2020/12/19 13:45:41 by sbarka           ###   ########.fr       */
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
	void			*line;
	struct s_list	*next;
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
	float			dish;
	float			disv;
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
	float			mvstep;
	int				lr;
}					t_player;
t_player			g_pl;

typedef struct		s_rgb{
	int				r;
	int				g;
	int				b;
	char			**color;
	char			*tmp;
	char			*trim;
}					t_rgb;

typedef struct		s_texture{
	int				w;
	int				h;
	unsigned int	*addr;
	int				bpp;
	int				ll;
	int				e;
	void			*img;
}					t_texture;
typedef struct		s_sprit
{
	int				x;
	int				y;
	int				size;
	float			dis;
	float			angle;
	int				i;
	float			y_ofst;
	float			x_ofst;
}					t_sprit;

typedef struct		s_wall{
	float			perd;
	float			distpp;
	float			projwh;
	int				wallsh;
	int				walltp;
	int				wallbp;
	int				distft;
	int				txtox;
	int				txtoy;
}					t_wall;

typedef struct		s_bitmap
{
	int				w;
	int				he;
	int				bc;
	int				wb;
	int				imgs;
	int				bs;
	int				bob;
	int				fs;
	int				bp;
	unsigned char	h[54];
	unsigned char	* buf;
	int				ro;
	int				co;
	int				*color;
	int				fd;

}					t_bitmap;

typedef	struct		s_config{
	t_rgb			rgb;
	t_bitmap		bitm;
	float			nexthx;
	float			nexthy;
	float			nextvx;
	float			nextvy;
	t_wall			*wall;
	char			*line;
	int				i;
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
	int				c;
	int				f;
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
	t_player		player;
	t_texture		*t;
	t_ray			*rays;
	int				empty;
	t_list			*sp;
}					t_config;
t_config			g_c;

void				ft_init(void);
void				ft_init_mlx(void);
void				ft_err(char *message);
void				ft_read_var(int fd);
int					ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_check_r(char **str);
void				ft_check_c();
void				ft_check_f();
void				ft_check_s(char **str);
void				ft_err_s(char **str);
void				ft_err_ea(char **str);
void				ft_err_no(char **str);
void				ft_err_so(char **str);
void				ft_err_we(char **str);
int					ft_nbr_split(char **str);
int					ft_is_number(char *s);
int					ft_zeros(char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_set_txt();
void				ft_read_map(int fd);
void				ft_check_map(char *line, int i);
void				ft_set_player(int i, float angle);
void				ft_check_ml(char *line);
void				ft_check_txt_s(char *s);
void				ft_store_list(void);
t_list				*ft_lstlast(t_list *lst);
void				ft_valid();
int					ft_lst_size(void);
void				ft_lstadd_back(t_list **alst, t_list *new);
t_list				*ft_lstnew(void *line);
void				ft_print_list(t_list *head);
void				ft_check_inv(void);
void				ft_store_array();
void				ft_print_array();
char				*ft_realloc(char *line);
char				*ft_join_txt(char **s1, char **s2);
int					ft_create_trgb(int t, int r, int g, int b);
void				ft_set_txts(void);
char				*ft_strd(char *line);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_free_d(char **str);
void				ft_free_s(char *str);
void				ft_free_list();
void				ft_cast();
void				ft_draw_ray(t_ray *ray);
float				ft_calcul_distance(float x1, float y1, float x2, float y2);
void				ft_print_rays();
void				ft_initialize_ray(t_ray *ray);
float				ft_normalize_angle(float angle);
void				ft_set_horiz_distance(t_ray *ray);
void				ft_set_horiz_var(t_ray *ray);
void				ft_set_vert_var(t_ray *ray);
void				ft_set_vert_distance(t_ray *ray);
void				ft_raycast(t_ray *ray);
void				ft_render_3d();
void				ft_put_pixel_to_image(int x, int y,
		unsigned int color);
int					ft_has_wall(float x, float y);
void				ft_init_turn_walk(void);
int					ft_update(void);
int					ft_op_f(char *filename);
void				ft_check_spaces();
void				ft_render(void);
int					ft_save(void);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					mlx_get_screen_size(void *mlx_ptr, int *sizex, int *sizey);
void				ft_check_array();
void				ft_check_fl(char *line);
void				ft_check_ml(char *line);
void				ft_space_to_wall();
void				ft_check_file_ex(char *filename);
void				free_exit();
int					ft_nbr_comma(char *s);
void				ft_check_save(int argc, char *argv[]);
int					ft_deal_key(int key);
void				ft_store_sprite(int y, int x);
void				ft_dist_sprite();
void				ft_draw_rectangle(int x, int y, int color);
void				ft_render_sprite(t_list *tmp);
void				ft_render_sprites();
void				ft_sort_list();
void				draw_sprite(t_list *tmp);
void				ft_set_s(void);
void				sprite_pp(t_list *sprit, int i, int j);
int					*get_colors(int color);
void				ft_save_file(void);
void				create_header(void);
int					*get_colors(int color);
void				create_image(void);
int					screenshot(void);
void				ft_inisialize_save(void);
void				ft_header(void);
void				ft_swap(t_list *current, t_list *next);
char				*ft_differnt_zero(char *s);
int					ft_exit(int i);
#endif
