#include "../cub3d.h"

void ft_store_list(char *line)
{
	
    int len ;
    char *new;
    int i;

    len = ft_strlen(line);
	i = 0;
    if(!(new = malloc(sizeof(char ) * (len + 1))))
        ft_err("memory problem");

	while (i < len){
		new[i] = line[i];
		i++;
	}
    new[i] ='\0';
    
    if (g_c.head == NULL)
    {
        
        g_c.ml= len;
        if(!(g_c.head = ft_lstnew(new)))
            ft_check_exit("memory problem");
      
    }else
    {
        if (len >= g_c.ml)
            g_c.ml = len;
        ft_lstadd_back(g_c.head,ft_lstnew(new));
    }
  
}