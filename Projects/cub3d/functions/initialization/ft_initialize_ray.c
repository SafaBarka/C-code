#include "../../variables/cub3d.h"

void ft_initialize_ray(Ray *ray)
{
    ray->rayAngle = ft_normalize_angle(ray);
    ray->hitXhorz = 0;
    ray->hitYhorz = 0;

    ray->hitXVert = 0;
    ray->hitYVert = 0;

    ray->distanceHorz = 0;
    ray->distanceVert = 0;
    ray->isRayFacingDown = 0;
    ray->isRayFacingUp = 0;
    ray->isRayFacingRight = 0 ;
    ray->isRayFacingLeft = 0;
    ray->foundHorzWallHit = 0;
    ray->foundVertWallHit = 0;
    ray->wallHitX= 0;
    ray->wallHitY= 0;
    if (ray->rayAngle >= 0 && ray->rayAngle <= M_PI)
        ray->isRayFacingDown = 1;
    else
        ray->isRayFacingUp = 1;

    if (ray->rayAngle <= M_PI /2 || ray->rayAngle >= 3 * M_PI/2)
        ray->isRayFacingRight = 1;
    else
            ray->isRayFacingLeft = 1;
}