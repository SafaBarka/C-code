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
void ft_check_errors_r(char **str);
void ft_set_resolution(char **str);
int ft_is_number(char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);