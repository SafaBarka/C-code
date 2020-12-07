#include "cub3d.h"

int ft_has_wall(float x, float y)
{
    
    if (x < 0 || x > g_c.temp_w|| y < 0 || y > g_c.temp_h) {
            return 1;
        }
     int a = floor(x / g_c.tw );
     int b = floor(y /g_c.th);
    int c = g_c.map[b][a];
    return c;
}

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

void ft_update_player()
{

    float newx;
    float newy;
    float rlangle;

    if(g_c.player->lr != 0)
    {
      rlangle = g_c.player->rota - M_PI / 2;
      g_c.player->mvstep = g_c.player->lr * g_c.player->mvs;
    }else
    {
      g_c.player->rota += g_c.player->turn *g_c.player->rots;
      g_c.player->mvstep = g_c.player->walk * g_c.player->mvs;
      rlangle = g_c.player->rota;
    }
    newx= g_c.player->x +cos(rlangle) *  g_c.player->mvstep *2 ;
    newy= g_c.player->y + sin(rlangle) *  g_c.player->mvstep *2 ;
    int a = floor(newx / g_c.tw );
    int b = floor(newy /g_c.th);
    if ((a > 0 && b > 0) && ft_has_wall(newx , newy) != '1')
    {
      g_c.player->x = g_c.player->x +cos(rlangle) *  g_c.player->mvstep;
      g_c.player->y = g_c.player->y + sin(rlangle) *  g_c.player->mvstep;
    }
}



void ft_update()
{
   
  ft_draw_black_screen();
    
    ft_update_player();
    ft_cast();
    ft_render_3d();
    mlx_put_image_to_window(g_c.mlx,g_c.mlx_win,g_c.img.im,0,0);

}





