
#include "../headers/functions.h"

int ft_store_map_2d()
{
    config.nbr_columns = config.len_leng_line;
    config.nbr_rows = ft_lst_size(config.head);

    int r = 0;
    //int c = 0;

    t_list *tmp = config.head;

    map = malloc( config.nbr_rows * sizeof(char *));

    while(r < config.nbr_rows)
    {
       map[r] = tmp->line;
       tmp = tmp->next;
       r++;
    }
    printf("line = |%s|\n",map[0]);
    return 1;
}