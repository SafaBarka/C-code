#include "../../variables/cub3d.h"

void ft_free_single(char *ptr)
{
    free(ptr);
}

void ft_free_double(char **ptr)
{
    int n ;
    int i = 0;
    n = ft_nbr_split(ptr);

    while(i < n)
        free(ptr[i]);
    free(ptr);
}