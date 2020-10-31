#include "../../variables/cub3d.h"

void ft_check_errors_c(char **str)
{
        if (config.c != NULL)
        {
            perror("defining variable  'C' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (C)");
            exit(EXIT_FAILURE);
        }  
}
