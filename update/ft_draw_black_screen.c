#include "../cub3d.h"

void    ft_draw_black_screen()
{
    int y = 0;
    int x;
    while (y < g_c.h)
    {
        x = 0;
        while (x < g_c.w)
        {
            ft_put_pixel_to_image(x,y,0x000000,0);
            x++;
        }
        y++;
    }
   
}