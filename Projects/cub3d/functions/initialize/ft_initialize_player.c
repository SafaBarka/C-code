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

    player.rotationAngle = (M_PI / 2);
    player.moveSpeed = 10;
    player.rotationSpeed = 10 * (M_PI / 180);

    player.turnDirection = 0;
    player.walkDirection = 0;
}