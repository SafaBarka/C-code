#include "../cub3d.h"

int ft_check_line_break(char c)
{
    
    if (c == '\0' && config.found_map == 1 )
        ft_check_exit("line break in  map");
    if (c == '\0')
        return 1;

    return 0;
}

