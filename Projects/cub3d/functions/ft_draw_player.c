
#include "../headers/functions.h"

void ft_draw_player(int color)
{
    float i;
    float x1;
    float y1;

    i = 0;
    while (i < 360)
    {
        x1 = player.radius *cos(i * M_PI/180);
        y1 = player.radius *sin(i * M_PI/180);
        ft_put_pixel_to_image((player.x + x1), (player.y + y1),color);
        i+= 0.1;
    }
}
