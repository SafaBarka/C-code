#include "../../variables/cub3d.h"

int ft_check_line_break(char c)
{
    
    if (c == '\0' && config.found_map == 1)
    {
        perror("line break between lines  of map");
        exit(EXIT_FAILURE);
    } 
    if (c == '\0')
        return 1;

    return 0;
}

