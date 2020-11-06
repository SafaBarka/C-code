#include "../../variables/cub3d.h"

void    ft_draw_ray(Ray *ray)
{
      float horzHitDistance = ray->foundHorzWallHit 
        ? distanceBetweenPoints(player.x , player.y,ray->horzWallHitX,ray->horzWallHitY)
        : 1000000;
    float vertHitDistance = ray->foundVertWallHit
        ?distanceBetweenPoints(player.x, player.y,ray->vertWallHitX,ray->vertWallHitY)
        :1000000;
    if (vertHitDistance < horzHitDistance)
    {
        ft_put_orientation(ray->rayAngle,GRAY,vertHitDistance);
        //ft_draw_circle(vertWallHitX,vertWallHitY);
    }else
    {
         ft_put_orientation(ray->rayAngle,GRAY,horzHitDistance);
        // ft_draw_circle(horzWallHitX,horzWallHitY);

       
    }
}