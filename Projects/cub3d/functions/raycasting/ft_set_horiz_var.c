#include "../../variables/cub3d.h"

void    ft_set_horiz_var(Ray *ray)
{
    ray->yintercept = floor(player.y / config.tile_height) *config.tile_height;
    ray->yintercept +=ray->isRayFacingDown ? config.tile_height : 0;
    //find the x-coordinate of the closest horizontal grid intersection
    ray->xintercept = player.x + (ray->yintercept - player.y) /tan(ray->rayAngle);
    //calculate the increment xstep and ystep
    ray->ystep =config.tile_height;
    ray->ystep *=ray->isRayFacingUp ? -1 :1;
    ray->xstep = config.tile_height /tan(ray->rayAngle);
    ray->xstep *= (ray->isRayFacingLeft && ray->xstep > 0) ? -1 : 1;
    ray->xstep *=(ray->isRayFacingRight && ray->xstep < 0) ? -1 : 1;

}

void    ft_set_horiz_distance(Ray *ray)
{
    float nextHorzTouchX = ray->xintercept;
    float nextHorzTouchY = ray->yintercept;

    //increment xstep and ystep until we find a wall
    while (nextHorzTouchX > 0 && nextHorzTouchX <config.width && nextHorzTouchY >0 && nextHorzTouchY <config.height)
    {
         float xToCheck = nextHorzTouchX;
         float yToCheck = nextHorzTouchY + (ray->isRayFacingUp ? -1 : 0);
         if(has_wall(xToCheck,yToCheck) == '1')
         {
            
             //fond a wall hit
            ray->horzWallHitX = nextHorzTouchX;
            ray->horzWallHitY = nextHorzTouchY;
           // ray->distance_horiz = distanceBetweenPoints(player.x , player.y,ray->horzWallHitX,ray->horzWallHitY);
            ray->foundHorzWallHit = 1;
            break;
         }else
         {
             nextHorzTouchX +=ray->xstep;
             nextHorzTouchY +=ray->ystep;
         }
    }
}