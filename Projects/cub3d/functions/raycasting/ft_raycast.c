#include "../../variables/cub3d.h"

void  ft_raycast(Ray *ray, int i)
{
    ft_initialize_ray(ray);
     //horizontal
    ft_set_horiz_var(ray);
    ft_set_horiz_distance(ray);
    ///////////---------------------------------------------------------Verti
    
    //find the x coordinate of the closest vertical grid intersection
    
    ft_set_vert_var(ray);
   ft_set_vert_distance(ray);

ft_draw_ray(ray);
  



}