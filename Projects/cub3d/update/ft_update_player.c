#include "../cub3d.h"

void ft_update_player()
{
    config.player->rotationAngle += config.player->turnDirection * config.player->rotationSpeed;
   // config.player->rotationAngle = ft_normalize_angle(config.player->rotationAngle);

    float moveStep = config.player->walkDirection *config.player->moveSpeed;
    
    float newX= config.player->x +cos(config.player->rotationAngle) * moveStep ;
    float newY= config.player->y + sin(config.player->rotationAngle) * moveStep ;
      int a = floor(newX / config.tile_width );
     int b = floor(newY /config.tile_height);
   if ((a > 0 && b > 0) && ft_has_wall(newX , newY) != '1')
    {

        config.player->x = newX;
        config.player->y = newY;
    }
}