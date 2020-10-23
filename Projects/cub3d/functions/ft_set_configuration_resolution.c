#include "../headers/functions.h"

int ft_set_configuration_resolution(char * width, char *height)
{
    //treat the 0 case ?

    //ft_is_number() will include also the negative numbers 
    if(!ft_is_number(width) || !ft_is_number(height))
    {
        printf("R 's parameters are not valid numbers\n");
        return 0;
    }
    config.r_width = ft_atoi(width);
 
    config.r_height = ft_atoi(height);
  
        return 1;
}