#include "../../variables/cub3d.h"

void  ft_set_array_2d()
{
    config.columns = config.max_length;
    config.rows = ft_lst_size(config.head);

    config.tile_width =(config.width / config.columns);
    //config.TILE_SIZE_width = 90;
    config.tile_height =(float)(config.height /config.rows);
    //config.TILE_SIZE_height = 90;
    
    int r = 0;
   

    t_list *tmp = config.head;

    config.map = malloc( config.rows * sizeof(char *));

    while(r < config.rows)
    {
       config.map[r] = ft_realloc(tmp->line, config.max_length);
       tmp = tmp->next;
       r++;
    }
}