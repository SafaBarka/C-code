#include "../../variables/cub3d.h"

void ft_initialize_ray(Ray *ray)
{
    ray->rayAngle = ft_normalize_angle(ray);
    ray->hitX = 0;
    ray->hitY = 0;
    ray->distance = 0;
    ray->isRayFacingDown = 0;
    ray->isRayFacingUp = 0;
    ray->isRayFacingRight = 0 ;
    ray->isRayFacingLeft = 0;
    ray->foundHorzWallHit = 0;
    if (ray->rayAngle >= 0 && ray->rayAngle <= M_PI)
        ray->isRayFacingDown = 1;
    else
        ray->isRayFacingUp = 1;

    if (ray->rayAngle <= M_PI /2 || ray->rayAngle >= 3 * M_PI/2)
        ray->isRayFacingRight = 1;
    else
            ray->isRayFacingLeft = 1;
}