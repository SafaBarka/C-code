/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_horiz_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:41:02 by sbarka            #+#    #+#             */
/*   Updated: 2020/11/26 14:41:04 by sbarka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void    ft_set_horiz_var(t_ray *ray)
{
    ray->yi = floor(g_c.player->y / g_c.th) *g_c.th;
    ray->yi +=ray->d? g_c.th : 0;
    //find the x-coordinate of the closest horizontal grid intersection
    ray->xi = g_c.player->x + (ray->yi- g_c.player->y  ) /tan(ray->a);
    //calculate the increment xstep and ystep
    ray->ys =g_c.th;
    ray->ys *=ray->u ? -1 :1;
    ray->xs = g_c.th/tan(ray->a);
    ray->xs *= (ray->l && ray->xs > 0) ? -1 : 1;
    ray->xs *=(ray->r && ray->xs < 0) ? -1 : 1;

}

void    ft_set_horiz_distance(t_ray *ray)
{
    float nexthx = ray->xi;
    float nexthy = ray->yi;
    //increment xstep and ystep until we find a wall
    while (nexthx >0 && nexthx < g_c.temp_w && nexthy > 0 && nexthy < g_c.temp_h)
    {
         float xToCheck = nexthx;
         float yToCheck = nexthy + (ray->u ? -1 : 0);
    
        int a = floor(xToCheck / g_c.tw );
        int b = floor(yToCheck /g_c.th);
         if(a < g_c.co && b < g_c.ro && ft_has_wall(xToCheck,yToCheck) == '1')
         {
           
             //fond a wall hit
            ray->hx = nexthx;
            ray->hy = nexthy;
       
            ray->fh = 1;
         
            break;
         }else
         {
             nexthx +=ray->xs;
             nexthy+=ray->ys;
         }
    }
}
