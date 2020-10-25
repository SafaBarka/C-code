#include "../../headers/functions.h"

void ft_print_list(t_list *head)
{
   t_list *tmp = head;
   while (tmp != NULL)
   {
      printf("|%s|\n",tmp->line);
      tmp = tmp->next;

   }
}