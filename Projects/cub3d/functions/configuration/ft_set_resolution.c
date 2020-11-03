
#include "../../variables/cub3d.h"

void ft_set_resolution(char **str)
{
    config.nbr_variables++;
    config.width = ft_atoi(str[1]);
    config.height = ft_atoi(str[2]);
    // have one pixel column per pixel of my resolution
    //maybe we want the column be a little bit ticker
    //the number of rays depend of how tick the columns are
    config.num_rays = (config.width /config.wall_strip_width);
    config.rays = (Ray *)malloc(sizeof(Ray) * config.num_rays);
    //printf("width = %f height = %f\n",config.width,config.height);
}