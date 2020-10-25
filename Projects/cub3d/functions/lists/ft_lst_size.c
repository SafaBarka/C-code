#include "../../headers/functions.h"

int ft_lst_size()
{
    t_list *tmp = config.head;
    int i = 0;
    while(tmp != NULL)
    {
        tmp = tmp->next;
            i++;
    }
    return i;
}