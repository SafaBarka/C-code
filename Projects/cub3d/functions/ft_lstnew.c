#include "../headers/functions.h"

t_list *ft_lstnew(char *line)
{
   t_list *element;
   if(!(element = (t_list *)malloc(sizeof(t_list))))
      return NULL;
   element->line = line;
   element->next = NULL;   
   return (element);
}