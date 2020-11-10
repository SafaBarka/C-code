#include "../cub3d.h"

int ft_nbr_split(char **str)
{
    int i = 0;
  
    while(str[i])
        i++;
    return i;
}