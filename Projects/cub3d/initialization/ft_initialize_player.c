#include "../cub3d.h"
void ft_initialize_player()
{
    if ( !(config.player = malloc(sizeof(Player))))
      ft_check_exit("memory problem");
   
    config.player->x = 0;
    config.player->y = 0;
    config.player->player_found = 0;
    config.player->player_east = 0;
    config.player->player_west = 0;
    config.player->player_north = 0;
    config.player->player_south = 0;

    config.player->radius = 1;
    config.player->moveSpeed =25;
    config.player->rotationSpeed = 20* (M_PI / 180);
    config.player->turnDirection = 0;
    config.player->walkDirection = 0;
}