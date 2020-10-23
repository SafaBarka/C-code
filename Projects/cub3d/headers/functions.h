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

int ft_store_map(char *line);

