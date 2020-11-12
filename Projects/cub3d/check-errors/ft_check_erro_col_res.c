#include "../cub3d.h"

void ft_check_erro_c(char **str)
{
        if (config.c != NULL)
            ft_check_exit("defining variable  'C' twice in the file");
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 1  (C)");
        
}

void ft_check_erro_f(char **str)
{
        if (config.f != NULL)
           ft_check_exit("defining variable  'F' twice in the file");
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 1  (F)");
}


void ft_check_erro_r(char **str)
{
  
            if(config.width != -1 && config.height != -1)
                ft_check_exit("defining variable  'R' twice in the file");
            else if (ft_nbr_split(str) != 3)
                 ft_check_exit("number of parameters are  != 2  (R)");
            else if (ft_zeros(str[1]) || ft_zeros(str[2]))
                ft_check_exit("the width and height must be != 0");
            else if(!ft_is_number(str[1]) || !ft_is_number(str[2]))
                ft_check_exit("R 's parameters are not valid numbers");
}

void ft_check_erro_s(char **str)
{
        if (config.s != NULL)
           ft_check_exit("defining variable  'S' twice in the file");
  
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 2  (S)");
}
