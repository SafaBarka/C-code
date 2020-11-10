#include "../cub3d.h"

int ft_zeros(char *str)
{
    int i ;

    i = 0;
        while(str[i] == '0')
        {
            i++;
        }
        if (str[i] == '\0')
            return 1;
        
        return 0;
}