#include "../../variables/cub3d.h"

void ft_put_orientation(double angle , int color, double distance )
{
    int length = 0;
   
    while (length < distance)
    {
        ft_put_pixel_to_image((player.x  + cos(angle) * length),(player.y + sin(angle) * length) ,color);
        length++;
    }
}

float distanceBetweenPoints(float x1,float y1,float x2,float y2)
{
    return sqrt((x2 -x1) *(x2 -x1) + (y2-y1)*(y2-y1));
}