#include "../../variables/cub3d.h"

void ft_check_r(char **str)
{
    ft_check_errors_r(str);
    ft_set_resolution(str); 
}

void ft_check_c(char **str)
{
    ft_check_errors_c(str);
    ft_set_c(str); 
}

void ft_check_f(char **str)
{
    ft_check_errors_f(str);
    ft_set_f(str); 
}

void ft_check_s(char **str)
{
    ft_check_errors_s(str);
    ft_set_s(str); 
}

