#include "../../variables/cub3d.h"

int ft_is_number(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return 0;
        i++;
    }
    return 1;
}