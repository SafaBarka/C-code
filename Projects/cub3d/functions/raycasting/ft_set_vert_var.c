#include "../../variables/cub3d.h"

void  ft_set_vert_var(Ray *ray)
{

    ray->xinterceppt = floor(player.x /config.tile_width) * config.tile_width;
    ray->xinterceppt += ray->isRayFacingRight ? config.tile_width : 0; 

    ray->yintercept = player.y + (ray->xinterceppt - player.x)*tan(ray->rayAngle);

    ray->xstep = config.tile_width; //tile_height
    ray->xstep *= ray->isRayFacingLeft ? -1 : 1;

    ray->ystep = ray->xstep * tan(ray->rayAngle);
    ray->ystep *=(ray->isRayFacingUp && ray->ystep > 0) ? -1 : 1;
    ray->ystep *=(ray->isRayFacingDown && ray->ystep < 0) ? -1 : 1;

    ray->nextVertX = ray->xinterceppt;
    ray->nextVertY = ray->yintercept;

}