#include "../cub3d.h"

void ft_store_map_list(char *line)
{
    int len ;
    char *new;
    int i;

    len = ft_strlen(line);
	i = 0;
    if(!(new = malloc(sizeof(char ) * (len + 1))))
        ft_check_exit("memory problem");

	while (i < len){
		new[i] = line[i];
		i++;
	}
    new[i] ='\0';
    
    if (config.head == NULL)
    {
        
        config.max_length= len;
        if(!(config.head = ft_lstnew(new)))
            ft_check_exit("memory problem");
      
    }else
    {
        if (len >= config.max_length)
            config.max_length = len;
        ft_lstadd_back(config.head,ft_lstnew(new));
    }
  
}