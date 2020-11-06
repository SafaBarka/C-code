#include "../../variables/cub3d.h"
    

void ft_put_pixel_to_image(int x, int y , int color)
{
     x= x * config.mini_map_factor;
    y = y * config.mini_map_factor;
    char *dst;

    dst = config.image_win.addr + (y * config.image_win.line_length + x * (config.image_win.bpp/ 8));

    *(unsigned int *)dst = color;

}