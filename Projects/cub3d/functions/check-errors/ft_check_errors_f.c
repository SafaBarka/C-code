#include "../../variables/cub3d.h"
void ft_check_errors_f(char **str)
{
        if (config.f != NULL)
        {
            perror("defining variable  'F' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (F)");
            exit(EXIT_FAILURE);
        }  
}
