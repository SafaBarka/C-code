#include "../../variables/cub3d.h"
void ft_check_errors_s(char **str)
{
        if (config.s != NULL)
        {
            perror("defining variable  'S' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (S)");
            exit(EXIT_FAILURE);
        }  
}
