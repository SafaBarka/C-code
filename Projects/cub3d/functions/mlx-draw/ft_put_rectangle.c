#include "../../variables/cub3d.h"

void ft_put_rectangle(int x , int y, int color)
{
        int i ;
        int j;
        i = x + config.tile_width;
        j = y + config.tile_height;
        while ( x < i)
        {
            while (y <j)
            {
                    if (x  == (i - config.tile_width)  ||  x == i -1   ||
                    y == (j - config.tile_height) || y == j -1)
                    {
                      
                        ft_put_pixel_to_image(x,y,yellow);
                    }else
                        ft_put_pixel_to_image(x,y,color);
                    y++;
            }
            x++;
            y = j - config.tile_height;
        }
       
}