#include "../../variables/cub3d.h"

void ft_check_not_var(char **str)
{

if (ft_strncmp(str[0],"R",2) != 0 && 
    ft_strncmp(str[0],"S",2) != 0 && 
    ft_strncmp(str[0],"F",2)!= 0  && 
    ft_strncmp(str[0],"C",2)!= 0  &&
    ft_strncmp(str[0],"NO",2)!= 0 && 
    ft_strncmp(str[0],"SO",2) != 0 && 
    ft_strncmp(str[0],"WE",2) != 0 && 
    ft_strncmp(str[0],"EA",2) != 0 
    )
    {
         perror("nom de variable is not valid!");
         exit(EXIT_FAILURE);
    }

}