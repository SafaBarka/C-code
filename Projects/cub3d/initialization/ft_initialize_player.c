#include "../cub3d.h"
void ft_initialize_player()
{
  
  config.player->x = 0;
  config.player->y = 0;
    config.player->player_found = 0;
   config.player->player_east = 0;
   config.player->player_west = 0;
    config.player->player_north = 0;
  config.player->player_south = 0;

    config.player->radius = 1;
    config.player->moveSpeed =15;
   config.player->rotationSpeed = 20* (M_PI / 180);

    config.player->turnDirection = 0;
    config.player->walkDirection = 0;
}