#include "../headers/functions.h"
    //fill the image using formula (X position * 4 +  Line_size * Y position)

void ft_put_pixel_to_image(int x, int y , int color)
{
    char *dst;

    //y * my_image.line_length  + x * 4
    //y * my_image.line_length + x * (32/8)
    //y * my_image.line_length + x * (my_image.bits_per_pixel/8) 
    dst = image_win.addr + (y * image_win.line_length + x * (image_win.bpp/ 8));

     //color information is stored as four individual 8-bit unsigned integer components.
    *(unsigned int *)dst = color;

}