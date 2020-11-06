#include "../../variables/cub3d.h"

void ft_initialize_ray(Ray *ray)
{
    ray->rayAngle = ft_normalize_angle(ray); 
    ray->isRayFacingDown = ray->rayAngle >= 0 && ray->rayAngle <= M_PI;
    ray->isRayFacingUp = !ray->isRayFacingDown;
    ray->isRayFacingRight = (ray->rayAngle >= 0 && ray->rayAngle  <= M_PI /2) || (ray->rayAngle >= 3 * (M_PI /2) && ray->rayAngle <= 2* M_PI);
    ray->isRayFacingLeft = !ray->isRayFacingRight;
    ray->foundHorzWallHit = 0;
    ray->horzWallHitX = 0;
    ray->horzWallHitY = 0;
    ray->foundVertWallHit = 0;
    ray->vertWallHitX = 0;
    ray->vertWallHitY = 0;
    ray->vertWallContent = 0;
    ray->distance_horiz = 0;
    ray->distance_vert=0;
    
}