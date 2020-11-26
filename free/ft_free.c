#include "../cub3d.h"

void ft_free_d(char **str)
{
    int i ;

    i = 0;
    if (str)
    {
        while(str[i])
        {
            free(str[i]);
            i++;
        }
    }
    free(str);
}

void ft_free_s(char *str)
{
    free(str);
}
void ft_free_list(t_list *head)
{
    t_list *current;
    t_list *next;
    current = head;


    if (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}