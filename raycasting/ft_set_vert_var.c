#include "../cub3d.h"

void    ft_set_vert_var(t_ray *ray)
{
    ray->xi = floor(g_c.player->x / g_c.tw) *g_c.tw;
    ray->xi+=ray->r ? g_c.tw : 0;
    //find the y-coordinate of the closest vertical grid intersection
    ray->yi = g_c.player->y + (ray->xi - g_c.player->x) * tan(ray->a);
    //calculate the increment xstep and ystep
    ray->xs =g_c.tw;
    ray->xs *=ray->l ? -1 :1;

    ray->ys = g_c.tw* tan(ray->a);
    ray->ys*= (ray->u && ray->ys> 0) ? -1 : 1;
    ray->ys *=(ray->d && ray->ys < 0) ? -1 : 1;
}

void    ft_set_vert_distance(t_ray *ray)
{
     float nextvx= ray->xi;
    float nextvy= ray->yi;
    

    //increment xstep and ystep until we find a wall
    while (nextvx > 0 && nextvx < g_c.temp_w && nextvy > 0 && nextvy < g_c.temp_h)
    {

         float xToCheck = nextvx + (ray->l ? -1 : 0);
         float yToCheck = nextvy;
        int a = floor(xToCheck / g_c.tw );
        int b = floor(yToCheck /g_c.th);
         if( a < g_c.co && b < g_c.ro && ft_has_wall(xToCheck,yToCheck) == '1')
         {
             //fond a wall hit
            ray->vx = nextvx;
            ray->vy = nextvy;
           // ray->distance_vert = distanceBetweenPoints(player.x, player.y,ray->vertWallHitX,ray->vertWallHitY);
            
            ray->fv = 1;
        
            break;
         }else
         {
             nextvx +=ray->xs;
             nextvy +=ray->ys;
         }
    } 
}