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
#define confetti 0xEDED61
#define sulu 0xCAED61
#define blue 0x6188ED
#define yellow 0xffff00
#define Turquoise 0x61EDB5
#define red 0xFF0000
#define green 0x008000
typedef	struct		s_image{
	void			*im; //image
	unsigned int	*addr; //address
	int				bpp;
	int				ll; //length line
	int				e; //endian
}					t_image;

typedef	struct		s_list{
	char			*line;
	struct s_list	*next;
}					t_list;

typedef struct		s_ray{
	float			a; //ray angle
	int				d; //facing down
	int				u; //facing up
	int				r; //facing right
	int				l; //facing left
	float			xi; //xintercept
	float			yi; // y intercept
	float			xs;//x step
	float			ys;//y step
	int				fh;//found horizontal
	float			hx;//horizontal wall hit x
	float			hy;//horizontal wall hit y
	int				fv; //found vertical
	float			vx; //vertical wall hit x
	float			vy; //vertical wall hit y
	float			dis; //distance
	float			dish;// horizontal distance
	float			disv; // vertical distance
	float			wx; // wall hit x
	float			wy;//wall hit y
}					t_ray;
t_ray				g_ray;

typedef struct		s_player{
	float			x; //player x 
	float			y; //player y
	int				n; //north
	int				s;//south
	int				e;//east
	int				w;//west
	int				f;//found
	int				turn; //turn direction
	int				walk; //walk direction
	float			rota; //rotation angle
	float			mvs; //move speed
	float			rots; //rotation speed
	float			rad; //radius
	float			mvstep;
	int				lr;
}					t_player;
t_player			g_pl;

typedef struct		s_texture{
	int				w; //text width
	int				h; //texture height
	unsigned int	*addr; //addre
	int				bpp;
	int				ll;
	int				e; //endian
	void			*img; //image *xpm
}					t_texture;

typedef struct		s_wall{
	float			perd; //perpdistance
	float			distpp; //distance proj plane
	float			projwh; //projected wall height
	int				wallsh;	//wall strip height
	int				walltp;	//wall top pixel
	int				wallbp; //
	int				distft;
	int				txtox; //texture offset x
	int				txtoy;	//texture offset y;
}					t_wall;		
typedef struct 		s_bitmap
{
	int width;
	int height;
	int bitcount;
	int wi_byt;
	int imagesize;
	int bisize;
	int bfoffbits;
	int filesize;
	int biplanes;
	unsigned char header[54];	
	unsigned char* buf;
	int row;
	int col;
	int *color;		
	int fd;

}					t_bitmap;
typedef	struct		s_config{
	t_bitmap 		*bitmap;			
	float			nexthx;
	float			nexthy;
	float			nextvx;
	float			nextvy;
	t_wall			*wall;
	char			*line;
	int				i;
	void			*mlx; //mlx
	void			*mlx_win; //mlx_win
	t_image			img; //image
	int				w; //width
	int				h; //height
	int				tw; //tile width
	int				th; //tile height
	int				co; //columns
	int				ro; //rows
	char			*no; //north texture
	char			*so; //south texture
	char			*we; //west texture
	char			*ea;//east texture
	char			*s; //sprite texture
	int				c; //floor color
	int	 			f;//ceiling color
	int				ml; //max_length
	int				ll; //last line
	int				fm; //found map
	int				nbrv; //nbr de variables
	int				nbrl; //nbr lignes
	char			**map;
	t_list			*head;
	double			fov;
	int				nbrr;
	int				temp_w; //temp width
	int				temp_h; //temp height
	t_player		*player;
	t_texture		*t; //array of texture
	t_ray			*rays; //array of rays
	int				empty;
}					t_config;
t_config			g_c;

int					ft_op_f(char *filename);
void				ft_init(void);
void				ft_init_mlx(void);
void				ft_init_play(void);

void				ft_err(char *message);
void				ft_read_var(int fd, int i);
int					ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_check_l(char *line, int i);
int					ft_check_b_l(char c);
int					ft_check_var(char *line, int i);
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
void				ft_set_r(char **str);
void				ft_set_f(char *str);
void				ft_set_c(char *str);
int					ft_nbr_split(char **str);
void				ft_check_not_var(char **str);
int					ft_is_number(char *s);
int					ft_zeros(char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_check_txt_no(char *s);
void				ft_check_txt_so(char *s);
void				ft_check_txt_we(char *s);
void				ft_check_txt_ea(char *s);
void				ft_set_txt();
void				ft_set_no();
void				ft_set_so();
void				ft_set_we();
void				ft_set_ea();
void				ft_read_map(int fd, int i);
void				ft_check_map(char *line, int i);
void				ft_set_player(int i, float angle);
void				ft_check_ml(char *line);
void				ft_check_v(char **str);
void				ft_check_txt_s(char *s);
void				ft_set_s(void);
void				ft_store_list(void);
t_list				*ft_lstlast(t_list *lst);
void				ft_valid();
int					ft_lst_size(void);
void				ft_lstadd_back(t_list *alst, t_list *new);
t_list				*ft_lstnew(char *line);
void				ft_print_list(t_list *head);
void				ft_check_inv(void);
void				ft_store_array();
void				ft_print_array();
char				*ft_realloc(char *line, int max_length);
char				*ft_join_txt(char **s1, char **s2);
int					ft_create_trgb(int t, int r, int g, int b);
void				ft_init_tex();
void				ft_set_txts(void);
char				*ft_strd(char *line);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_free_d(char **str);
void ft_free_s(char *str);
void ft_free_list();
void ft_cast();

void    ft_draw_ray(t_ray *ray);
float ft_calcul_distance(float x1,float y1,float x2,float y2);
void ft_print_rays();
void ft_initialize_ray(t_ray *ray);
float ft_normalize_angle(float angle);

void    ft_set_horiz_distance(t_ray *ray);
void    ft_set_horiz_var(t_ray *ray);
void    ft_set_vert_var(t_ray *ray);
void    ft_set_vert_distance(t_ray *ray);
void  ft_raycast(t_ray *ray, int i);
void ft_render_3d();
void ft_put_pixel_to_image(int x, int y , unsigned int color,int i);
void    ft_draw_black_screen();
int ft_has_wall(float x, float y);
void ft_init_turn_walk();
void ft_update();

void ft_update_player();
void ft_render_ceiling(int i);
void ft_render_walls(int i);
int		ft_op_f(char *filename);
int		ft_deal_key(int key, void *param);
void	ft_check_spaces();
void	ft_check_space(int j, int i);
void	ft_init_wall(void);
void	ft_render(void);
void	ft_read(int fd);
void	ft_check_save(int argc,char *argv[]);
void	ft_save();
void	*ft_memcpy(void *dst, const void *src, size_t n);
int     *get_colors(int color);
void ft_set_header(void);
void ft_set_init(void);
int					mlx_get_screen_size(void *mlx_ptr, int *sizex, int *sizey);

void ft_check_array();
void ft_check_fl(char *line);
void ft_check_ml(char *line);
void ft_space_to_wall();
#endif
