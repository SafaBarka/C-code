
#include "../headers/functions.h"

int ft_store_map_2d()
{
    config.nbr_columns = config.len_leng_line;
    config.nbr_rows = ft_lst_size(config.head);

    int r = 0;
   

    t_list *tmp = config.head;

    map = malloc( config.nbr_rows * sizeof(char *));

    while(r < config.nbr_rows)
    {
       map[r] = ft_realloc(tmp->line, config.len_leng_line);
       tmp = tmp->next;
       r++;
    }
    return 1;
}