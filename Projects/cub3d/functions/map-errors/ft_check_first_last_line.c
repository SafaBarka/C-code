#include "../../headers/functions.h"

int ft_check_first_last_line(char *line)
{
    int i  = 0;
    while(line[i])
    {
            if (line[i] != ' ' && line[i] != '1')
            {
                if (config.head == NULL)
                    printf("the first map row contains |%c|  different from 1 and ' ' \n",line[i]);
                else
                    printf("the last map row contains |%c|  different from 1 and ' ' \n",line[i]);            
                return 0;
            }
            i++;
    }

    return 1;
}