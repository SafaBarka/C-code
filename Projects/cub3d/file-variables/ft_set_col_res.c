#include "../cub3d.h"

void ft_set_s(char **str)
{
     config.nbr_variables++;
    config.s = ""; // to change later 
}

void ft_set_r(char **str)
{
    config.nbr_variables++;
    config.width = ft_atoi(str[1]);
    config.height = ft_atoi(str[2]);
    
    config.num_rays =(int)(config.width /config.wall_strip_width);
    config.rays = (Ray *)malloc(sizeof(Ray) * config.num_rays);
    //printf("width = %f height = %f\n",config.width,config.height);
}

void ft_set_f(char **str)
{
     config.nbr_variables++;
    config.f = ""; // to change later 
}

void ft_set_c(char **str)
{
     config.nbr_variables++;
    config.c = ""; // to change later 
}