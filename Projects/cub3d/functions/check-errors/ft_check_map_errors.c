#include "../../variables/cub3d.h"

void ft_check_first_last_line(char *line)
{
    int i  = 0;
    while(line[i])
    {
            if (line[i] != ' ' && line[i] != '1')
            {
                if (config.head == NULL)

                    perror("the first map row contains not valid caractere");
                else
                     perror("the last map row contains not valid caractere");
                exit(EXIT_FAILURE);            
            }
            i++;
    }
}