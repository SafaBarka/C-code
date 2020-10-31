#include "../../variables/cub3d.h"

void ft_store_map_list(char *line)
{
    int len ;
    len = ft_strlen(line);
    if (config.head == NULL)
    {
        
        config.max_length= len;
        config.head = ft_lstnew(line);
      
    }else
    {
        if (len >= config.max_length)
            config.max_length = len;
        ft_lstadd_back(config.head,ft_lstnew(line));
    }
}