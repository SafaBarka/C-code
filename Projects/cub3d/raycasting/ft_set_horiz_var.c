#include "../cub3d.h"

void    ft_set_horiz_var(Ray *ray)
{
    ray->yintercept = floor(config.player->y / config.tile_height) *config.tile_height;
    ray->yintercept +=ray->isRayFacingDown ? config.tile_height : 0;
    //find the x-coordinate of the closest horizontal grid intersection
    ray->xintercept = config.player->x + (ray->yintercept- config.player->y  ) /tan(ray->rayAngle);
    //calculate the increment xstep and ystep
    ray->ystep =config.tile_height;
    ray->ystep *=ray->isRayFacingUp ? -1 :1;
    ray->xstep = config.tile_height/tan(ray->rayAngle);
    ray->xstep *= (ray->isRayFacingLeft && ray->xstep > 0) ? -1 : 1;
    ray->xstep *=(ray->isRayFacingRight && ray->xstep < 0) ? -1 : 1;

}

void    ft_set_horiz_distance(Ray *ray)
{
    float nextHorzTouchX = ray->xintercept;
    float nextHorzTouchY = ray->yintercept;
    //increment xstep and ystep until we find a wall
    while (nextHorzTouchX >0 && nextHorzTouchX < config.tmp_width && nextHorzTouchY > 0 && nextHorzTouchY < config.tmp_height)
    {
         float xToCheck = nextHorzTouchX;
         float yToCheck = nextHorzTouchY + (ray->isRayFacingUp ? -1 : 0);
    
        int a = floor(xToCheck / config.tile_width );
        int b = floor(yToCheck /config.tile_height);
         if(a < config.columns && b < config.rows && ft_has_wall(xToCheck,yToCheck) == '1')
         {
           
             //fond a wall hit
            ray->horzWallHitX = nextHorzTouchX;
            ray->horzWallHitY = nextHorzTouchY;
       
            ray->foundHorzWallHit = 1;
            break;
         }else
         {
             nextHorzTouchX +=ray->xstep;
             nextHorzTouchY +=ray->ystep;
         }
    }
}