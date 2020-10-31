#include "../../variables/cub3d.h"
void ft_check_errors_we(char **str)
{
        if (config.we != NULL)
        {
            perror("defining variable  'WE' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (WE)");
            exit(EXIT_FAILURE);
        }  
}
