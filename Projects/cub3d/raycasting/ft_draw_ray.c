#include "../cub3d.h"

void    ft_draw_ray(Ray *ray)
{
      float horzHitDistance = ray->foundHorzWallHit 
        ? ft_calcul_distance(config.player->x , config.player->y,ray->horzWallHitX,ray->horzWallHitY)
        : 1000000;
    float vertHitDistance = ray->foundVertWallHit
        ?ft_calcul_distance(config.player->x, config.player->y,ray->vertWallHitX,ray->vertWallHitY)
        :1000000;
    if (vertHitDistance < horzHitDistance)
    {
        ray->distance = vertHitDistance;
      //  ft_draw_orientation(ray->rayAngle,green,vertHitDistance);
        //ft_draw_circle(vertWallHitX,vertWallHitY);
    }else
    {
        ray->distance = horzHitDistance;
       //ft_draw_orientation(ray->rayAngle,green,horzHitDistance);
        // ft_draw_circle(horzWallHitX,horzWallHitY);

       
    }

}

float ft_calcul_distance(float x1,float y1,float x2,float y2)
{
    return sqrt((x2 -x1) *(x2 -x1) + (y2-y1)*(y2-y1));
}

void ft_print_rays()
{
    int i = 0; 
    while ( i < config.num_rays)
    {
        ft_draw_orientation(config.rays[i].rayAngle,green,config.rays[i].distance);
        i++;
    }
}