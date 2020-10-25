#include "../../headers/functions.h"

void ft_draw_rectangle(int x, int y, int color)
{
        int i ;
        int j;

        i = x + config.TILE_SIZE_width;
        j = y + config.TILE_SIZE_height;

         while(y < j)
        {
             while(x < i)
            {
                ft_put_pixel_to_image(x,y, color);
                 x++;
            }
            y++;
            x = i - config.TILE_SIZE_width;
        }
}