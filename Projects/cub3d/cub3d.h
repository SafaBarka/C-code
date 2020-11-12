#include <fcntl.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <mlx.h>
//#include "minilibx/mlx.h"
#include "structs.c"
#include "helper-functions/get_next_line/get_next_line.h"
#define confetti 0xEDED61
#define sulu 0xCAED61
#define blue 0x6188ED
#define yellow 0xffff00
#define Turquoise 0x61EDB5
#define red 0xFF0000
#define green 0x008000
Config config; 



int ft_open_file(char *filename);
void ft_initialize_config();
void ft_initialize_mlx();
void ft_initialize_player();
void ft_read_file(int fd);
int ft_check_line(char *line , int i );
int		ft_atoi(const char *str);
int ft_is_number(char *s);

int ft_nbr_split(char **str);

char			**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_sub(char const *s, unsigned int start, size_t len);
int ft_zeros(char *str);
int ft_check_line_break(char c);
void ft_check_no(char **str);
void ft_check_so(char **str);
void ft_check_we(char **str);
void ft_check_ea(char **str);

void ft_set_r(char **str);
void ft_check_s(char **str);
void ft_check_f(char **str);
void ft_check_c(char **str);
void ft_check_r(char **str);
void ft_set_c(char **str);
void ft_set_f(char **str);
void ft_set_s(char **str);

void ft_check_erro_no(char **str);
void ft_check_erro_c(char **str);
void ft_check_erro_ea(char **str);
void ft_check_erro_f(char **str);
void ft_check_erro_r(char **str);
void ft_check_erro_s(char **str);
void ft_check_erro_so(char **str);
void ft_check_erro_we(char **str);

void ft_set_no(char **str);
void ft_set_ea(char **str);
void ft_set_we(char **str);
void ft_set_so(char **str);
void ft_check_exit(char *message);
void ft_check_not_var(char **str);
void ft_check_first_last_line(char *line);
void ft_check_close_bounds(char *line);

void ft_check_middle_lines(char *line);
void ft_check_map(char *line);
void ft_store_map_list(char *line);
t_list *ft_lstlast(t_list *lst);
int ft_lst_size();
void	ft_lstadd_back(t_list *alst, t_list *new);
t_list *ft_lstnew(char *line);
void ft_print_list(t_list *head);
void ft_set_player(float x , float angle, char c);
void  ft_set_array();
char *ft_realloc(char *line, int max_length);
void ft_print_array();
void ft_draw_map();
void ft_draw_rectangle(int x , int y, int color);
void ft_put_pixel_to_image(int x, int y , int color,int i);
void ft_draw_player(float x , float y,int color);

void ft_draw_orientation(double angle , int color, double distance);
int deal_key(int key, void *param);

void ft_initialize_turn_walk();
void    ft_draw_black_screen();
void ft_update_player();
void ft_update();

int ft_has_wall(float x, float y);

float ft_normalize_angle(float angle);
void ft_cast();
void  ft_raycast(Ray *ray, int i);

void    ft_set_horiz_var(Ray *ray);
void    ft_set_horiz_distance(Ray *ray);
void    ft_set_vert_var(Ray *ray);
void    ft_set_vert_distance(Ray *ray);
void ft_initialize_ray(Ray *ray);
void    ft_draw_ray(Ray *ray);
float ft_calcul_distance(float x1,float y1,float x2,float y2);
void ft_render_3d();
void ft_print_rays();
void ft_check_close_spaces();
void ft_check_space(int line_indice, int space_indice);
void ft_free(int true , void *ptr);
void ft_free_single(char *ptr);

void ft_free_double(char **ptr);
void ft_free_list(t_list *ptr);
















