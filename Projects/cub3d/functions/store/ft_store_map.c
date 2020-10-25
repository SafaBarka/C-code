#include "../../headers/functions.h"

int ft_store_map(char *line)
{
    int len ;
    len = ft_strlen(line);
    if (config.head == NULL)
    {
        
        config.len_leng_line= len;
        config.head = ft_lstnew(line);
      
    }else
    {
        if (len >= config.len_leng_line)
            config.len_leng_line = len;
        ft_lstadd_back(config.head,ft_lstnew(line));
    

    }
    return 1;
}