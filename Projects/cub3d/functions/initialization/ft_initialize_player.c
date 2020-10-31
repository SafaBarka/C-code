
#include "../../variables/cub3d.h"

void ft_initialize_player()
{
    player.x = -1;
    player.y = -1;
    player.player_found = 0;
    player.player_east = 0;
    player.player_west = 0;
    player.player_north = 0;
    player.player_south = 0;
    player.radius = 10;

    player.rotationAngle = (M_PI / 2);
    player.moveSpeed = 10;
    player.rotationSpeed = 10 * (M_PI / 180);

    player.turnDirection = 0;
    player.walkDirection = 0;
}