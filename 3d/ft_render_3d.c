#include "../cub3d.h"

void ft_render_3d()
{
  int i;
  int y;
  
  i = 0;
  y = 0;
  while(i < g_c.nbrr)
  {
   if (g_c.rays[i].dis != 0)
       g_c.wall->perd= g_c.rays[i].dis * cos(g_c.rays[i].a - g_c.player->rota);
    else
    g_c.wall->perd = 1;
    g_c.wall->distpp = (g_c.w /2) /tan(g_c.fov / 2);
    g_c.wall->projwh =(g_c.th / g_c.wall->perd) * g_c.wall->distpp;
    g_c.wall->wallsh = (int)g_c.wall->projwh;
    g_c.wall->walltp = (g_c.h /2)- (g_c.wall->wallsh/2);
    g_c.wall->walltp = g_c.wall->walltp < 0 ? 0 :g_c.wall->walltp;
    g_c.wall->wallbp =(g_c.h/2) +(g_c.wall->wallsh/2);
    g_c.wall->wallbp = g_c.wall->wallbp > g_c.h ?g_c.h:g_c.wall->wallbp;
    while (y < g_c.wall->walltp )
    {
        ft_put_pixel_to_image(i ,y,0xC9F8FE,0);
        y++;
    }
    y = g_c.wall->walltp;
        int textureOffsetX;
        int textureOffsetY;
       
        if (g_c.rays[i].fv)
            textureOffsetX = (int)g_c.rays[i].wy % 64;
        else
            textureOffsetX = (int)g_c.rays[i].wx % 64;
        while (y < g_c.wall->wallbp)
        {
         
            int distanceFromTop = y +(g_c.wall->wallsh / 2) - (g_c.h/ 2);
            textureOffsetY =distanceFromTop * ((float)64/ g_c.wall->wallsh);
            if (g_c.rays[i].fv == 1)
            {
            if (g_c.rays[i].r) //east
                g_c.img.addr[i+(y * g_c.w)]= g_c.t[3].addr[textureOffsetX + (g_c.tw *  textureOffsetY)];
            else if (g_c.rays[i].l)//west
               g_c.img.addr[i+(y * g_c.w)]= g_c.t[2].addr[textureOffsetX + (g_c.tw *  textureOffsetY)];
            }else if(g_c.rays[i].fh == 1) 
            {
                if (g_c.rays[i].u) //north
                    g_c.img.addr[i+(y * g_c.w)]= g_c.t[0].addr[textureOffsetX + (g_c.tw *  textureOffsetY)];
                 else if (g_c.rays[i].d) //south
                g_c.img.addr[i+(y * g_c.w)]= g_c.t[1].addr[textureOffsetX + (g_c.tw *  textureOffsetY)];
            }
    
            


            y++;
        }
        //---------------
        y = g_c.wall->wallbp -1;
      
         while (y <g_c.h)
        {
            ft_put_pixel_to_image(i ,y ,0xFFFFFF,0);
            y++;
        }

        
     
        i++;
    }
  }


void ft_put_pixel_to_image(int x, int y , unsigned int color,int i)
{
  
    char *dst;

    dst = (char*)g_c.img.addr + (y * g_c.img.ll + x * (g_c.img.bpp/ 8));

    *(unsigned int *)dst = color;

}