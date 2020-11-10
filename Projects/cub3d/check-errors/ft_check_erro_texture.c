#include "../cub3d.h"

void ft_check_erro_ea(char **str)
{
        if (config.ea != NULL)
            config.erro.message = "defining variable  'EA' twice in the file";
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 1  (EA)";
   ft_check_exit();
}

void ft_check_erro_no(char **str)
{
        if (config.no != NULL)
            config.erro.message = "defining variable  'NO' twice in the file";
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 1  (NO)";
        ft_check_exit();
}

void ft_check_erro_so(char **str)
{
        if (config.so != NULL)
            config.erro.message = "defining variable  'SO' twice in the file";
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 1  (SO)" ;
        ft_check_exit();
}

void ft_check_erro_we(char **str)
{
        if (config.we != NULL)
            config.erro.message = "defining variable  'WE' twice in the file";
        else if (ft_nbr_split(str) != 2)
            config.erro.message = "number of parameters are  != 1  (WE)" ;
        ft_check_exit();
}
