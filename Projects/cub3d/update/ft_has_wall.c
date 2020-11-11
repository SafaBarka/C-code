#include "../cub3d.h"

int ft_has_wall(float x, float y)
{
    
    if (x < 0 || x > config.tmp_width|| y < 0 || y > config.tmp_height) {
            return 1;
        }
     int a = floor(x / config.tile_width );
     int b = floor(y /config.tile_height);
    int c = config.map[b][a];
    return c;
}