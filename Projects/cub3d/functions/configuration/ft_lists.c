#include "../../variables/cub3d.h"

t_list *ft_lstlast(t_list *lst)
{
   if (lst != NULL)
   {
      while(lst->next != NULL)
      {
         lst = lst->next;
      }
   }
   return (lst);
}

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


void	ft_lstadd_back(t_list *alst, t_list *new)
{
	t_list *lst;

	if (alst == NULL)
		alst = new;
	else if (alst && new)
	{
		lst = ft_lstlast(alst);
		lst->next = new;
	}
}

t_list *ft_lstnew(char *line)
{
   t_list *element;
   if(!(element = (t_list *)malloc(sizeof(t_list))))
      return NULL;
   element->line = line;
   element->next = NULL;   
   return (element);
}