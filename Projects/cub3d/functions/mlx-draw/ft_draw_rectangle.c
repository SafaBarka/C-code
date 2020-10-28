#include "../../headers/functions.h"

void ft_draw_rectangle(double x, double y, int color)
{
        double i ;
        double j;
        i = x + config.TILE_SIZE_width;
        j = y + config.TILE_SIZE_height;
        while ( x < i)
        {
            while (y <j)
            {
                    if (x  == (i - config.TILE_SIZE_width)  ||  x == i -1  ||
                    y == (j - config.TILE_SIZE_height) || y == j -1)
                        ft_put_pixel_to_image(x,y,yellow);
                else
                    ft_put_pixel_to_image(x,y,color);
                    y++;
            }
            x++;
            y = j - config.TILE_SIZE_height;
        }
/*
         while(y < j)
        {
             while(x <i)
            {
                ft_put_pixel_to_image(x,y, color);
                 x++;
            }
            y++;
            x = i - config.TILE_SIZE_width;
        }
    */
}