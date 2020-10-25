
#include "../../headers/functions.h"

void ft_print_map_2d(char **map)
{
    int i = 0;
    int j = 0 ;

    while(i < config.nbr_rows)
    {
        j = 0;
        while(j < config.nbr_columns)
        {   
            printf("|%c| ",map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}