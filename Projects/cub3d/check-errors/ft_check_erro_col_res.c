#include "../cub3d.h"

void ft_check_erro_c(char **str)
{
        if (config.c != NULL)
            config.erro.message = "defining variable  'C' twice in the file";
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 1  (C)";
        ft_check_exit();
}

void ft_check_erro_f(char **str)
{
        if (config.f != NULL)
           config.erro.message = "defining variable  'F' twice in the file";
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 1  (F)";
        ft_check_exit();
}


void ft_check_erro_r(char **str)
{
  
            if(config.width != -1 && config.height != -1)
                config.erro.message = "defining variable  'R' twice in the file";
            else if (ft_nbr_split(str) != 3)
                 config.erro.message = "number of parameters are  != 2  (R)";
            else if (ft_zeros(str[1]) || ft_zeros(str[2]))
                config.erro.message = "the width and height must be != 0";
            else if(!ft_is_number(str[1]) || !ft_is_number(str[2]))
                config.erro.message = "R 's parameters are not valid numbers";
            ft_check_exit();
}

void ft_check_erro_s(char **str)
{
        if (config.s != NULL)
           config.erro.message = "defining variable  'S' twice in the file";
  
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 2  (S)";
        ft_check_exit();
}
