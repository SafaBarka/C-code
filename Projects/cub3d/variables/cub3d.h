#include "structs.c"
#include <math.h>
#include <mlx.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../functions/helper-functions/get_next_line/get_next_line.h"
#define STEELBLUE 0x4682B4
#define PURPLE 0x800080
#define MAROON 0x800000
#define GRAY 0x808080
#define yellow 0xffff00
#define WHITE 0xFFFFFF
Config config;

Player player;


void ft_file(char *filename);
void    ft_initialize_config();
void ft_initialize_mlx();
int ft_read_file(int fd);
char	*ft_sub(char const *s, unsigned int start, size_t len);
int ft_set_configuration(char *line);
int ft_check_line_break(char c);
int ft_nbr_split(char **str);
void ft_free_single(char *ptr);
void ft_free_double(char **ptr);
char			**ft_split(char const *s, char c);
int ft_is_number(char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int ft_zeros(char *str);

void ft_check_errors_no(char **str);
void ft_check_errors_c(char **str);
void ft_check_errors_ea(char **str);
void ft_check_errors_f(char **str);
void ft_check_errors_r(char **str);
void ft_check_errors_s(char **str);
void ft_check_errors_so(char **str);
void ft_check_errors_we(char **str);
void ft_set_resolution(char **str);

void ft_set_no(char **str);
void ft_set_ea(char **str);
void ft_set_we(char **str);
void ft_set_c(char **str);
void ft_set_f(char **str);
void ft_set_so(char **str);
void ft_set_s(char **str);
void ft_check_s(char **str);
void ft_check_f(char **str);
void ft_check_c(char **str);
void ft_check_r(char **str);
void ft_check_no(char **str);
void ft_check_so(char **str);
void ft_check_we(char **str);
void ft_check_ea(char **str);
void ft_check_not_var(char **str);
void ft_check_map(char *line);
void ft_check_first_last_line(char *line);
t_list *ft_lstlast(t_list *lst);
int ft_lst_size();
void	ft_lstadd_back(t_list *alst, t_list *new);
t_list *ft_lstnew(char *line);
void ft_store_map_list(char *line);
void ft_check_first_spaces(char *line);
void ft_check_middle_lines(char *line);
void ft_check_last_spaces(char *line);
void ft_put_pixel_to_image(int x, int y , int color);
void ft_put_rectangle(int x , int y, int color);
void ft_put_map(int color);
void ft_print_list(t_list *head);
char *ft_realloc(char *line, int nbr);
void  ft_set_array_2d();
void ft_print_array2d();
void ft_put_player(int color);
void ft_initialize_player();
void ft_put_orientation(double angle , int color, double distance );
int deal_key(int key, void *param);
void initialize_turnwalk();
void ft_update();
int has_wall(double x, double y);
void update_player_position();
void ft_cast_all_rays();
void ft_print_rays();
float ft_normalize_angle(Ray *ray);
void ft_cast(Ray *ray , int i);
void ft_initialize_ray(Ray *ray);

float distanceBetweenPoints(float x1,float y1,float x2,float y2);
void  ft_set_horz_var(Ray *ray);
void  ft_set_horz_distance(Ray *ray, int i);


void  ft_set_vert_var(Ray *ray);
void  ft_set_vert_distance(Ray *ray, int i);
void ft_draw_circle(double x , double y);

