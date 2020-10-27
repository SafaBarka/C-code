#include "../../headers/functions.h"

void ft_display_player_orientation()
{
    int length  = 40;
   // float y = (player.y  * config.TILE_SIZE_height) - (config.TILE_SIZE_height / 2);
   // float x = (player.x * config.TILE_SIZE_width) + (config.TILE_SIZE_width / 2);
   float y = player.y;
   float x = player.x;
    float tmp ;
    if (player.playerNorth)
    {
        tmp = y;
        while (length--)
        {
            ft_put_pixel_to_image(x, tmp ,SALMON);
           
            tmp--;

        }
    }
    else if (player.playerSouth)
    {
        tmp = y;
        length = 40;
        while (length--)
        {
            ft_put_pixel_to_image(x, tmp ,SALMON);
           
            tmp++;
        }

    }else if (player.playerWest)
    {
        tmp = x;
        length = 40;
        while (length--)
        {
            ft_put_pixel_to_image(tmp, y ,SALMON);
           
            tmp--;
        }

    }else if (player.playerEast)
    {
               tmp = x;
        length = 40;
        while (length--)
        {
            ft_put_pixel_to_image(tmp, y,SALMON);
           
            tmp++;
        }
    }
}