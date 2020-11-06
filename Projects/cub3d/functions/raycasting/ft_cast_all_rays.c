#include "../../variables/cub3d.h"

void ft_cast_all_rays()
{
   
    int cpt_columns = 0 ;

    //the first left ray
    double ray_angle = player.rotationAngle - (config.fov / 2);
    while (cpt_columns < config.num_rays ) //config.num_rays )
    {
       config.rays[cpt_columns].rayAngle =  ray_angle;
       //cast one single line
       ft_raycast(&config.rays[cpt_columns],cpt_columns);
       //next ray 
       ray_angle += config.fov / config.num_rays;
       cpt_columns++;
    }
}