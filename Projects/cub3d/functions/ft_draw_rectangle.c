#include "../headers/functions.h"

void ft_draw_rectangle(int x, int y,int color)
{
    int i ;
    int j;

    i = x + TILE_SIZE;
    j = y + TILE_SIZE;

    while(y < j)
    {
        while(x < i)
        {
            ft_put_pixel_to_image(x,y, color);
            x++;
        }
        y++;
        x = i - TILE_SIZE;
    }
}