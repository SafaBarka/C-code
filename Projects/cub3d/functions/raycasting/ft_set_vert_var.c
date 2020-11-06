#include "../../variables/cub3d.h"

void    ft_set_vert_var(Ray *ray)
{
    ray->xintercept = floor(player.x / config.tile_width) *config.tile_width;
    ray->xintercept +=ray->isRayFacingRight ? config.tile_width : 0;
    //find the y-coordinate of the closest vertical grid intersection
    ray->yintercept = player.y + (ray->xintercept - player.x) * tan(ray->rayAngle);
    //calculate the increment xstep and ystep
    ray->xstep =config.tile_width;
    ray->xstep *=ray->isRayFacingLeft ? -1 :1;

    ray->ystep = config.tile_width* tan(ray->rayAngle);
    ray->ystep *= (ray->isRayFacingUp && ray->ystep > 0) ? -1 : 1;
    ray->ystep *=(ray->isRayFacingDown && ray->ystep < 0) ? -1 : 1;
}

void    ft_set_vert_distance(Ray *ray)
{
     float nextVertTouchX = ray->xintercept;
    float nextVertTouchY = ray->yintercept;

    //increment xstep and ystep until we find a wall
    while (nextVertTouchX > 0 && nextVertTouchX <config.width && nextVertTouchY >0 && nextVertTouchY <config.height)
    {
         float xToCheck = nextVertTouchX + (ray->isRayFacingLeft ? -1 : 0);
         float yToCheck = nextVertTouchY;
         if(has_wall(xToCheck,yToCheck) == '1')
         {
             //fond a wall hit
            ray->vertWallHitX = nextVertTouchX;
            ray->vertWallHitY = nextVertTouchY;
           // ray->distance_vert = distanceBetweenPoints(player.x, player.y,ray->vertWallHitX,ray->vertWallHitY);
            
            ray->foundVertWallHit = 1;
            break;
         }else
         {
             nextVertTouchX +=ray->xstep;
             nextVertTouchY +=ray->ystep;
         }
    } 
}