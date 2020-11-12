#include "../cub3d.h"

int ft_open_file(char *filename)
{
    int fd;

    if ((fd = open(filename,O_RDONLY))< 0)
        ft_check_exit("failed to open file");
    return fd;
}