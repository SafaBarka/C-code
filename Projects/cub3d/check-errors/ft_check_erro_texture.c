#include "../cub3d.h"

void ft_check_erro_ea(char **str)
{
        if (config.ea != NULL)
            ft_check_exit("defining variable  'EA' twice in the file");
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 1  (EA)");

}

void ft_check_erro_no(char **str)
{
        if (config.no != NULL)
            ft_check_exit("defining variable  'NO' twice in the file");
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 1  (NO)");
}

void ft_check_erro_so(char **str)
{
        if (config.so != NULL)
            ft_check_exit("defining variable  'SO' twice in the file");
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 1  (SO)") ;
}

void ft_check_erro_we(char **str)
{
        if (config.we != NULL)
            ft_check_exit("defining variable  'WE' twice in the file");
        else if (ft_nbr_split(str) != 2)
            ft_check_exit("number of parameters are  != 1  (WE)") ;
}
