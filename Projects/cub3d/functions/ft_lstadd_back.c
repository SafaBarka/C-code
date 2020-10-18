#include "../headers/functions.h"

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