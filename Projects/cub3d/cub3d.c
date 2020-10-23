
#include "headers/functions.h"

int main()
{
     if (ft_read_file("infos.cub") == 0)
        return 0;
    else
    {
            printf("everything is fine\n");
    }  
    return 1;
}