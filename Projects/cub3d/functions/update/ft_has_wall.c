#include "../../headers/functions.h"

int ft_has_wall(double x , double y)
{
    if (x < 0 || x > config.r_width|| y < 0 || y >config.r_height) {
            return 1;
        }
     int a = (int)(x / config.TILE_SIZE_width);
     int b =(int) (y /config.TILE_SIZE_height);
     int c = map[b][a];
    return c;
}