#include "../cub3d.h"

void ft_initialize_pla()
{
    if ( !(g_c.player = malloc(sizeof(t_player))))
      ft_err("memory problem");
   
    g_c.player->x = 0;
    g_c.player->y = 0;
    g_c.player->f = 0;
    g_c.player->e = 0;
    g_c.player->w = 0;
    g_c.player->n = 0;
    g_c.player->s = 0;

    g_c.player->rad = 1;
    g_c.player->mvs =20;
    g_c.player->rota = 20* (M_PI / 180);
    g_c.player->turn = 0;
    g_c.player->walk = 0;
}