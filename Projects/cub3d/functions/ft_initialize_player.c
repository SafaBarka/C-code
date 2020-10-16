#include "../headers/functions.h"

void ft_initialize_player()
{
    player.x =(WINDOW_WIDTH / 2);
    player.y =(WINDOW_HEIGHT / 2);
    player.radius = 10;
    player.turnDirection = 0;
    player.walkDirection = 0;
    player.rotationAngle = (M_PI /2);
    player.moveSpeed = 5;
    player.rotationSpeed = 10 * (M_PI / 180 );
}