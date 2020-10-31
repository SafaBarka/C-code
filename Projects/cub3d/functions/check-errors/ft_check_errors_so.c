#include "../../variables/cub3d.h"
void ft_check_errors_so(char **str)
{
        if (config.so != NULL)
        {
            perror("defining variable  'SO' twice in the file");
            exit(EXIT_FAILURE);
        }
        if (ft_nbr_split(str) != 2)
        {
            perror("number of parameters are  != 2  (SO)");
            exit(EXIT_FAILURE);
        }  
}
