
#include "../../variables/cub3d.h"

void ft_set_resolution(char **str)
{
    config.nbr_variables++;
    config.width = ft_atoi(str[1]);
    config.height = ft_atoi(str[2]);
    //printf("width = %f height = %f\n",config.width,config.height);
}