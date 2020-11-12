#include "../cub3d.h"
    

void ft_put_pixel_to_image(int x, int y , int color,int i)
{
  
    char *dst;

    dst = config.image.addr + (y * config.image.line_length + x * (config.image.bpp/ 8));

    *(unsigned int *)dst = color;

}