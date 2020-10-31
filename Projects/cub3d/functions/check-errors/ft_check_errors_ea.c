#include "../../variables/cub3d.h"
void ft_check_errors_ea(char **str)
{
        if (config.ea != NULL)
        {
            perror("defining variable  'EA' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (EA)");
            exit(EXIT_FAILURE);
        }  
}
