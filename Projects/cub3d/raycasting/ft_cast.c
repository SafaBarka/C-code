#include "../cub3d.h"

void ft_cast()
{
   config.tmp_width = config.tile_width * config.columns;
   config.tmp_height = config.tile_height * config.rows ;
    int cpt_columns = 0 ;

    //the first left ray
    float ray_angle = config.player->rotationAngle - (config.fov / 2);

    while (cpt_columns < config.num_rays)  //config.num_rays )
    {
       config.rays[cpt_columns].rayAngle =  ray_angle;
       //cast one single line
       ft_raycast(&config.rays[cpt_columns],cpt_columns);
       //next ray 
      // printf("ray distance = %f\n",config.rays[cpt_columns].distance);
       ray_angle += config.fov / config.num_rays;
       cpt_columns++;
    }
}