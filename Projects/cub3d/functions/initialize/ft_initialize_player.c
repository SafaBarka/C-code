#include "../../headers/functions.h"

void ft_initialize_player()
{
    player.x = -1;
    player.y = -1;
    player.playerFound = 0;
    player.playerEast = 0;
    player.playerWest = 0;
    player.playerNorth = 0;
    player.playerSouth = 0;
    player.radius = 10;
}