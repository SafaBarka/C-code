#include "../cub3d.h"

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