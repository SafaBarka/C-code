#include "cub3d.h"

void ft_render_ceiling(int i)
{
    int y;

    y = 0;
     while (y < g_c.wall->walltp )
    {
        ft_put_pixel_to_image(i ,y,g_c.c,0);
        y++;
    }
    y = g_c.wall->walltp;
}

void ft_render_walls(int i)
{
    int y;
    y = g_c.wall->walltp;
    while (y < g_c.wall->wallbp)
    {
        if (g_c.rays[i].fv)
            g_c.wall->txtox = (int)g_c.rays[i].wy % 64;
        else
            g_c.wall->txtox = (int)g_c.rays[i].wx % 64;
        g_c.wall->distft = y +(g_c.wall->wallsh / 2) - (g_c.h/ 2);
        g_c.wall->txtoy = g_c.wall->distft * ((float)64/ g_c.wall->wallsh);
        if (g_c.rays[i].fv == 1)
        {
            if (g_c.rays[i].r) 
                g_c.img.addr[i+(y * g_c.w)]= g_c.t[3].addr[g_c.wall->txtox + (g_c.tw *  g_c.wall->txtoy)];
            else if (g_c.rays[i].l)
                g_c.img.addr[i+(y * g_c.w)]= g_c.t[2].addr[g_c.wall->txtox+ (g_c.tw *  g_c.wall->txtoy)];
        }
        else if(g_c.rays[i].fh == 1) 
        {
            if (g_c.rays[i].u)
                g_c.img.addr[i+(y * g_c.w)]= g_c.t[0].addr[g_c.wall->txtox + (g_c.tw *  g_c.wall->txtoy)];
            else if (g_c.rays[i].d)
                g_c.img.addr[i+(y * g_c.w)]= g_c.t[1].addr[g_c.wall->txtox + (g_c.tw *  g_c.wall->txtoy)];
        }
        y++;
    }
    //ft_render_sprite();
}
void ft_draw_rectangle(int x , int y, int color)
{
        int i ;
        int j;
       
        i = x + g_c.tw;
        j = y + g_c.th;
        while ( x < i)
        {
            while (y <j)
            {
                  //  if (x  == (i - config.tile_width)  ||  x == i -1   ||
                  //  y == (j - config.tile_height) || y == j -1)
                  //  {
                      
                  //    ft_put_pixel_to_image(x,y,yellow,1);
                  //  }else
                        ft_put_pixel_to_image(x,y,color,1);
                    y++;
            }
            x++;
           // y = j - config.tile_height;
           y = j - g_c.th;
        }
       
}
/*void ft_render_sprite()
{
    t_list *tmp = g_c.sp;
    int x;
    int y;
	while (tmp != NULL)
	{
        x = ((t_sprit *)tmp->line)->x;
        y = ((t_sprit *)tmp->line)->y;
		ft_draw_rectangle(x,y,red);
		tmp = tmp->next;
	}
}*/
void    ft_render_floor(int i)
{
    int y;
    y = g_c.wall->wallbp - 1;
    while (y <g_c.h)
    {
        ft_put_pixel_to_image(i ,y ,g_c.f,0);
        y++;
    } 

}
void ft_render_3d()
{
  int i;
  int y;
  
  i = 0;

    while(i < g_c.nbrr)
    {
        if (g_c.rays[i].dis != 0)
            g_c.wall->perd = g_c.rays[i].dis * cos(g_c.rays[i].a - g_c.player.rota);
        else
            g_c.wall->perd = 1;
        g_c.wall->distpp = (g_c.w /2) /tan(g_c.fov / 2);
        g_c.wall->projwh =(g_c.th / g_c.wall->perd) * g_c.wall->distpp;
        g_c.wall->wallsh = (int)g_c.wall->projwh;
        g_c.wall->walltp = (g_c.h /2)- (g_c.wall->wallsh/2);
        g_c.wall->walltp = g_c.wall->walltp < 0 ? 0 : g_c.wall->walltp;
        g_c.wall->wallbp =(g_c.h/2) +(g_c.wall->wallsh/2);
        g_c.wall->wallbp = g_c.wall->wallbp > g_c.h ?g_c.h:g_c.wall->wallbp;
        ft_render_ceiling(i);
        ft_render_walls(i);
        ft_render_floor(i);
        i++;
    }
}


void ft_put_pixel_to_image(int x, int y , unsigned int color,int i)
{
  
    char *dst;

    dst = (char*)g_c.img.addr + (y * g_c.img.ll + x * (g_c.img.bpp/ 8));

    *(unsigned int *)dst = color;

}