#include "global_variables.h"

void ft_print_list(t_list *head);

void	ft_lstadd_back(t_list *alst, t_list *new);

t_list *ft_lstlast(t_list *lst);

t_list *ft_lstnew(char *line);


int ft_read_file(char *filename);

int ft_set_configuration(char *line);

char			**ft_split(char const *s, char c);

char	*ft_sub(char const *s, unsigned int start, size_t len);

void ft_initialize_config();

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_check_nbr_splits(char **str);

int ft_set_configuration_resolution(char * width, char *height);

int ft_is_number(char *s);

int		ft_atoi(const char *str);

int ft_store_map_list(char *line);

int ft_store_map_array();

int ft_check_first_last_line(char *line);

int ft_lst_size();

char *ft_realloc(char *line, int nbr);
void ft_print_map_2d();

void ft_display_map(int color);


void ft_initialize_mlx();
void ft_put_pixel_to_image(int x, int y , int color);

void ft_initialize_player();
int ft_check_middle_line(char *line);

void ft_display_player(int color);

void ft_display_player_orientation();

void ft_draw_rectangle(double x, double y, int color);
int ft_deal_key(int key, void *param);
void ft_update_player_position();
int ft_has_wall(double x , double y);

void ft_delete_window();
void ft_initialize_turn_walk_directions();
void ft_update_all();



