#include "cub3d.h"

void ft_free_d(char **str)
{
    int i ;

    i = 0;
    if (str)
    {
        while(str[i])
        {
            free(str[i]);
            i++;
        }
    }
    free(str);
}

void ft_free_s(char *str)
{
    free(str);
}
void ft_free_list()
{
    t_list *tmp;

     while (g_c.head != NULL)
    {
       tmp = g_c.head;
       g_c.head = g_c.head->next;
       free(tmp);
    }
	free(g_c.head);
}

// in exit mode
//free map char **map
//free player
//free mlx things
//free wall;
//free text

void free_exit()
{
    free(g_c.player);
    ft_free_d(g_c.map);
    free(g_c.t);
    free(g_c.rays);
    free(g_c.no);
    free(g_c.so);
    free(g_c.we);
    free(g_c.ea);
    free(g_c.s);
}