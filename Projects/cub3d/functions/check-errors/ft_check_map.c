#include "../../variables/cub3d.h"

void ft_check_map(char *line)
{
    config.nbr_lines++;
    config.found_map = 1;
    if (!config.head)
        ft_check_first_last_line(line);
    else if (config.last_line == 1)
       ft_check_first_last_line(line);    
   /*
    else if (config.last_line == 1)
    {
        if (!ft_check_first_last_line(line))
            
    }
    else
    {
        if (!ft_check_middle_line(line))
            
    }
    if(ft_store_map_list(line) ==  0)
       */ 
}