#include "../../variables/cub3d.h"

void ft_check_errors_no(char **str)
{
        if (config.no != NULL)
        {
            perror("defining variable  'NO' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (NO)");
            exit(EXIT_FAILURE);
        }  
}