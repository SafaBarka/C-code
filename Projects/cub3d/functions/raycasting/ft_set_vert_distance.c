#include "../../variables/cub3d.h"

void  ft_set_vert_distance(Ray *ray, int i)
{
        //force the position to be inside the cell
      if (ray->isRayFacingLeft)
        ray->nextHorzX--;
         while(ray->nextVertX >= 0 && ray->nextVertX <= config.width
            && ray->nextVertY >= 0 && ray->nextVertY <= config.height){
        if (has_wall(ray->nextVertX , ray->nextVertY) == '1')
        {
            ray->hitXVert = ray->nextVertX;
            ray->hitYVert = ray->nextVertY;
            ray->foundVertWallHit = 1;
            ray->distanceVert = distanceBetweenPoints(player.x, player.y, ray->hitXVert,ray->hitYVert);
          //  ft_put_orientation(ray->rayAngle,GRAY,ray->distanceVert);
            break;
        }
        else
        {
            //increment x step and ystep until we find a wall
            ray->nextVertX +=ray->xstep;
            ray->nextVertY +=ray->ystep;
        }
        
    }
}