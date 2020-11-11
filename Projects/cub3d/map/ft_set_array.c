#include "../cub3d.h"

void  ft_set_array()
{
    int r;
    t_list *tmp;

    r = 0;
    config.columns = config.max_length;
    config.rows = ft_lst_size(config.head);
    
    config.tile_height =60;//floor(config.width / config.columns);
    config.tile_width =60;//floor(config.height/config.rows);
   
    config.player->x = config.player->x * config.tile_width + (config.tile_width / 2);
    config.player->y = config.player->y * config.tile_height - (config.tile_height /2);

    tmp = config.head;

   if(!(config.map = malloc((config.rows +1) * sizeof(char *))))
        config.erro.message = "memory problem";
   
    ft_check_exit();
   
    while(r < config.rows)
    {
        
       config.map[r] = ft_realloc(tmp->line, config.max_length);
       tmp = tmp->next;
       r++;
    }
    config.map[r]= NULL;
    ft_print_array();
}


