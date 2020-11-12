#include "../cub3d.h"
void ft_check_exit(char *message)
{ 
  // ft_free_double(config.map);
 //  ft_free_list(config.head);
    perror(message);
    exit(EXIT_FAILURE);
}

void ft_free_single(char *ptr)
{
    if (ptr)
        free(ptr);
}

void ft_free_double(char **ptr)
{
    int i ;
    if (ptr)
    {
        i = 0;
        while (ptr[i])
            free(ptr[i]);
        free(ptr);
    }
}

void ft_free_list(t_list *ptr)
{
    t_list *tmp;
    while (ptr != NULL)
    { 
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }

}