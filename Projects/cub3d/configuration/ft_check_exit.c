#include "../cub3d.h"
void ft_check_exit()
{
    if (ft_strncmp(config.erro.message, "",1) != 0)
    {
        perror(config.erro.message);
        exit(EXIT_FAILURE);
    }
}