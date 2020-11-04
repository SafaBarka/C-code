#include "../../variables/cub3d.h"

void  ft_set_horz_distance(Ray *ray, int i)
{
    //force the position to be inside the cell
      if (ray->isRayFacingUp)
        ray->nextHorzY--;
         while(ray->nextHorzX >= 0 && ray->nextHorzX <= config.width
            && ray->nextHorzY >= 0 && ray->nextHorzY <= config.height){
        if (has_wall(ray->nextHorzX , ray->nextHorzY) == '1')
        {
            ray->hitX = ray->nextHorzX;
            ray->hitY = ray->nextHorzY;
            ray->foundHorzWallHit = 1;
            ray->distance = distanceBetweenPoints(player.x, player.y, ray->hitX,ray->hitY);
            break;
        }
        else
        {
            //increment x step and ystep until we find a wall
            ray->nextHorzX +=ray->xstep;
            ray->nextHorzY +=ray->ystep;
        }
        
    }
}