#include "cub3d.h"

void ft_sort_list()
{
	t_list *current;
	t_list *next;

	float swap = 0;

	current = g_c.sp;
	while (current != NULL)
	{
		next = current->next;
		while (next != NULL)
		{
			if (((t_sprit *)next->line)->dis > ((t_sprit *)current->line)->dis)
			{
				swap = ((t_sprit *)next->line)->dis;
				((t_sprit *)next->line)->dis = ((t_sprit *)current->line)->dis;
				((t_sprit *)current->line)->dis = swap;

				swap = ((t_sprit *)next->line)->x;
				((t_sprit *)next->line)->x = ((t_sprit *)current->line)->x;
				((t_sprit *)current->line)->x = swap;

				swap = ((t_sprit *)next->line)->y;
				((t_sprit *)next->line)->y = ((t_sprit *)current->line)->y;
				((t_sprit *)current->line)->y = swap;
			}
			next = next->next;
		}
		current = current->next;
	}
}