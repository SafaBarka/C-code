#include "../../headers/functions.h"

void ft_display_player(int color)
{
    float i;
    float x1;
    float y1;
    printf("player x = %f\n",player.x);
    printf("player y = %f\n",player.y);
    i = 0;
    while (i < 360)
    {
        x1 = player.radius *cos(i * M_PI/180);
        y1 = player.radius *sin(i * M_PI/180);
      // ft_put_pixel_to_image(  ((player.x * config.TILE_SIZE_width)  + x1) + (config.TILE_SIZE_width / 2) , ((player.y *config.TILE_SIZE_height) + y1) - (config.TILE_SIZE_height /2) ,   color);
       ft_put_pixel_to_image(player.x + x1 , player.y + y1, color);
        i+= 0.1;
    }
    ft_display_player_orientation();
}