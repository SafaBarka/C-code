
#include "../../variables/cub3d.h"

int ft_set_configuration(char *line)
{
    char **str;
    
    str = ft_split(line,' ');
    if (ft_check_line_break(line[0]))
        return 1;
   
   if (config.nbr_variables != 8)
    {
       
       if (str[0] && ft_strncmp(str[0] ,"R", 2) == 0)
        {
            ft_check_errors_r(str);
            ft_set_resolution(str);
        }
        else if (str[0] && ft_strncmp(str[0] , "NO", 2) == 0)
        {
              ft_check_errors_no(str);
              ft_set_no(str);  
        }
        else if (str[0] && ft_strncmp(str[0] , "SO",2) == 0)
        {
             ft_check_errors_so(str);
              ft_set_so(str);  
        }
        else if (str[0] && ft_strncmp(str[0] , "WE",2) == 0)
        {
             ft_check_errors_we(str);
              ft_set_we(str);  
        }

        else if (str[0] && ft_strncmp(str[0] , "EA",2) == 0)
        {
             ft_check_errors_ea(str);
              ft_set_ea(str); 
        }
        else if (str[0] && ft_strncmp(str[0] , "S",2) == 0)
        {
               ft_check_errors_s(str);
               ft_set_s(str); 
        }
        else if (str[0] && ft_strncmp(str[0] , "F",2) == 0)
        {
             ft_check_errors_f(str);
               ft_set_f(str); 
        }
        else if (str[0] && ft_strncmp(str[0] , "C",2) == 0)
        {
              ft_check_errors_c(str);
               ft_set_c(str); 
        }
    }
   /*    

        //--------------------------------------------------------
        else if (ft_strncmp(str[0],"R",2) != 0 && 
                ft_strncmp(str[0],"S",2) != 0 && 
                ft_strncmp(str[0],"F",2)!= 0  && 
                ft_strncmp(str[0],"C",2)!= 0  &&
                ft_strncmp(str[0],"NO",2)!= 0 && 
                ft_strncmp(str[0],"SO",2) != 0 && 
                ft_strncmp(str[0],"WE",2) != 0 && 
                ft_strncmp(str[0],"EA",2) != 0 
                )
        {
        
            printf(" |%s| : nom de variable is not valid!\n",str[0]);
            return 0;
         }

    }
    else if  (config.nbr_variables == 8)
    {
        config.nbr_lines++;
        config.found_map = 1;
        if (config.head == NULL)
        {
            if (!ft_check_first_last_line(line))
                return 0;
        }
        else if (config.last_line == 1)
        {
            if (!ft_check_first_last_line(line))
                return 0;
        }
        else
        {
            if (!ft_check_middle_line(line))
                return 0;
        }
        if(ft_store_map_list(line) ==  0)
            return 0;
        
    }
    */
    
    return 1;
}