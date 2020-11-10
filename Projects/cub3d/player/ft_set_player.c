#include "../cub3d.h"

void ft_set_player(float x , float angle, char c)
{
    config.player->x = x;
    config.player->y = config.nbr_lines;
    config.player->player_found = 1;
    config.player->rotationAngle = angle;
     if ( c == 'N')
        config.player->player_north  = 1;
     else if (c == 'S')
        config.player->player_south  = 1;
    else if (c == 'W')
        config.player->player_west  = 1;
    else if (c == 'E')
        config.player->player_east  = 1;
}