
#include "../../variables/cub3d.h"

void    ft_initialize_config()
{
    config.width = -1;
    config.height = -1;
    config.tile_height = 0;
    config.tile_width = 0;
    config.columns = 0;
    config.rows = 0;
    config.no = NULL;
    config.so =NULL;
    config.we = NULL;
    config.ea = NULL;
    config.f = NULL;
    config.c = NULL;
    config.s = NULL;
    config.max_length = 0;
    config.last_line = -1;
    config.found_map = 0;
    config.nbr_variables = 0;
    config.nbr_lines = 0;
    config.map = NULL;
    config.head = NULL;
}

