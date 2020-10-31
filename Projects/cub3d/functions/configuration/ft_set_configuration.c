
#include "../../variables/cub3d.h"

int ft_set_configuration(char *line)
{
    char **str;
    
    str = ft_split(line,' ');
    if (ft_check_line_break(line[0]))
        return 1;
   
   if (*str && config.nbr_variables != 8)
    {
       
       if (str[0] && ft_strncmp(str[0] ,"R", 2) == 0)
            ft_check_r(str);
        else if (str[0] && ft_strncmp(str[0] , "NO", 2) == 0)
            ft_check_no(str);
        else if (str[0] && ft_strncmp(str[0] , "SO",2) == 0)
            ft_check_so(str);
        else if (str[0] && ft_strncmp(str[0] , "WE",2) == 0)
            ft_check_we(str);
        else if (str[0] && ft_strncmp(str[0] , "EA",2) == 0)
            ft_check_ea(str);
        else if (str[0] && ft_strncmp(str[0] , "S",2) == 0)
            ft_check_s(str);
        else if (str[0] && ft_strncmp(str[0] , "F",2) == 0)
            ft_check_f(str);  
        else if (str[0] && ft_strncmp(str[0] , "C",2) == 0)
            ft_check_c(str);  
        else  
            ft_check_not_var(str);
    }

    else if  (config.nbr_variables == 8)
        ft_check_map(line);
    
    
    return 1;
}