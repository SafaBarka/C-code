#include "../cub3d.h"

void ft_draw_player(float x , float y,int color)
{
   float i;
    float x1;
    float y1;
  
    i = 0;
    

      while (i < 360)
      {
          x1 = config.player->radius *cos(i * M_PI/180);
          y1 = config.player->radius*sin(i * M_PI/180);
          ft_put_pixel_to_image( x1+x , y1+y, color,1);
          i+= 0.01;
      }
    //  tmp= tmp - 0.5;
     // i = 0;
    
    ft_draw_orientation(config.player->rotationAngle, color,6);
}

void ft_draw_orientation(double angle, int color, double distance )
{
    int length = 0;
   
    while (length < distance)
    {
        ft_put_pixel_to_image((config.player->x  + cos(angle) * length),(config.player->y + sin(angle) * length) ,color,1);
        length++;
    }
}