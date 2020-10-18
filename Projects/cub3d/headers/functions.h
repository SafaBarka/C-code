#include "global_variables.h"

void ft_initialize_mlx();

void ft_put_pixel_to_image(int x, int y , int color);

void ft_initialize_player();

void  ft_draw_player();

void ft_draw_rectangle(int x, int y,int color);

void ft_draw_map(int color);

void  ft_read_from_map();

void ft_print_list(t_list *head);

void	ft_lstadd_back(t_list *alst, t_list *new);

t_list *ft_lstlast(t_list *lst);

t_list *ft_lstnew(char *line);