#include "structs.c"
#include <math.h>
#include <mlx.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../functions/helper-functions/get_next_line/get_next_line.h"
#define SALMON  0xFA8072
#define BROWN 0xa52a2a
#define burlywood  0xdeb887
#define DarkSalmon  0xe9967a

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
void ft_display_map(int color);