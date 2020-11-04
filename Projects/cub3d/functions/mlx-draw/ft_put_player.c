#include "../../variables/cub3d.h"

void ft_put_player(int color)
{
    double i;
    double x1;
    double y1;
  
    i = 0;
      while (i < 360)
      {
          x1 = player.radius *cos(i * M_PI/180);
          y1 = player.radius *sin(i * M_PI/180);
          ft_put_pixel_to_image(player.x + x1 , player.y + y1, color);
          i+= 0.01;
      }
      //ft_put_orientation(player.rotationAngle , color,120 );
     
    
}