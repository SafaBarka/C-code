
#include "headers/functions.h"

int main()
{
     if (ft_read_file("infos.cub") == 0)
        return 0;
    else
    {
        
            ft_store_map_2d();
    
            printf("everything is fine\n");
    }  
    ft_print_map_2d(map);
   
    return 1;
}