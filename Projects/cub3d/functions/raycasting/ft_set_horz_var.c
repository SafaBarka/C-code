#include "../../variables/cub3d.h"

void  ft_set_horz_var(Ray *ray)
{
    ray->yintercept = floor(player.y /config.tile_height) * config.tile_height;
    ray->yintercept += ray->isRayFacingDown ? config.tile_height : 0; 

    ray->xinterceppt = player.x + (ray->yintercept - player.y)/tan(ray->rayAngle);

    ray->ystep = config.tile_height;
    ray->ystep *= ray->isRayFacingUp ? -1 : 1;

    ray->xstep = ray->ystep /tan(ray->rayAngle);
    ray->xstep *=(ray->isRayFacingLeft && ray->xstep > 0) ? -1 : 1;
    ray->xstep *=(ray->isRayFacingRight && ray->xstep < 0) ? -1 : 1;

    ray->nextHorzX = ray->xinterceppt;
    ray->nextHorzY = ray->yintercept;
}