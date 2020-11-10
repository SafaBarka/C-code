#include "../cub3d.h"
    

void ft_put_pixel_to_image(int x, int y , int color,int i)
{
  if ( i == 1)
  {
    x= x * config.mini_map_factor;
    y = y * config.mini_map_factor;
  }
   
    char *dst;

    dst = config.image->addr + (y * config.image->line_length + x * (config.image->bpp/ 8));

    *(unsigned int *)dst = color;

}