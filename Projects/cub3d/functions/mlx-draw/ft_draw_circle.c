#include "../../variables/cub3d.h"
void ft_draw_circle(double x , double y)
{
   double i;
    double x1;
    double y1;
  
    i = 0;
      while (i < 360)
      {
          x1 = 20 *cos(i * M_PI/180);
          y1 = 20 *sin(i * M_PI/180);
          ft_put_pixel_to_image( x1+x , y1+y, PURPLE);
          i+= 0.01;
      }
}