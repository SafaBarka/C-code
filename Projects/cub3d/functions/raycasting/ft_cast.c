#include "../../variables/cub3d.h"

void ft_cast(Ray *ray , int i)
{
    ft_initialize_ray(ray);
    /////////////////////////
    //horizontal intersection
    /////////////////////////

    ft_set_horz_var(ray);
    ft_set_horz_distance(ray,i);

    /////////////////////////
    //vertical intersection
    /////////////////////////

  //  ft_set_vert_var(ray);
  //  ft_set_vert_distance(ray,i);

    //--------------------------------
   /* ray->wallHitX = (ray->distanceHorz < ray->distanceVert) 
                    ? ray->hitXhorz : ray->hitXVert;
     ray->wallHitY = (ray->distanceHorz < ray->distanceVert) 
                    ? ray->hitYhorz : ray->hitYVert;

    if (ray->distanceHorz < ray->distanceVert)
            ft_put_orientation(ray->rayAngle,GRAY,ray->distanceHorz);
    else
            ft_put_orientation(ray->rayAngle,GRAY,ray->distanceVert);

    */



  
  


}