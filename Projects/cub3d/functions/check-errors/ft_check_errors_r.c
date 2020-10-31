#include "../../variables/cub3d.h"

void ft_check_errors_r(char **str)
{
            if(config.width != -1 && config.height != -1)
            {
                perror("defining variable  'R' twice in the file");
                exit(EXIT_FAILURE);
            }
            if (ft_nbr_split(str) != 3)
            {
                perror("number of parameters are  != 2 (R)");
                exit(EXIT_FAILURE);
            }
            if (ft_zeros(str[1]) || ft_zeros(str[2]))
            {
                perror("the width and height must be != 0");
                exit(EXIT_FAILURE);
            }
            if(!ft_is_number(str[1]) || !ft_is_number(str[2]))
            {
                perror("R 's parameters are not valid numbers");
                exit(EXIT_FAILURE);
            }  
}