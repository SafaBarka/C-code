#include "cub3d.h"

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
void ft_free_list()
{
    t_list *tmp;

     while (g_c.head != NULL)
    {
       tmp = g_c.head;
       g_c.head = g_c.head->next;
       free(tmp);
    }
	free(g_c.head);
}