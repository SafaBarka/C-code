#include "../cub3d.h"

void ft_update_player()
{
    g_c.player->rota += g_c.player->turn * g_c.player->rots;
   // config.player->rotationAngle = ft_normalize_angle(config.player->rotationAngle);

    float moveStep = g_c.player->walk *g_c.player->mvs;
    
    float newX= g_c.player->x +cos(g_c.player->rota) * moveStep *2 ;
    float newY= g_c.player->y + sin(g_c.player->rota) * moveStep *2 ;
      int a = floor(newX / g_c.tw );
     int b = floor(newY /g_c.th);
   if ((a > 0 && b > 0) && ft_has_wall(newX , newY) != '1')
    {

        g_c.player->x = g_c.player->x +cos(g_c.player->rota) * moveStep;
        g_c.player->y = g_c.player->y + sin(g_c.player->rota) * moveStep;
    }
}