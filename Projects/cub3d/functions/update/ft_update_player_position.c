#include "../../headers/functions.h"

void ft_update_player_position()
{
    player.rotationAngle += player.turnDirection * player.rotationSpeed;

    double moveStep = player.walkDirection *player.moveSpeed;
    
    double newX= player.x +cos(player.rotationAngle) * moveStep ;
    double newY= player.y + sin(player.rotationAngle) * moveStep ;
    
    if (!(ft_has_wall(newX , newY) == '1'))
    {
        player.x = newX;
        player.y = newY;
    }
}