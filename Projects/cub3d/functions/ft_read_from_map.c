#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line/get_next_line.h"
#include "../headers/functions.h"

void ft_read_from_map()
{
   char  *line;
   int fd;
  
   fd = open("infos.cub", O_RDONLY);
   int i = 0;
   get_next_line(fd,&line);
   t_list *head ;
   head = ft_lstnew(ft_strdup(&line));

   while(get_next_line(fd,&line) == 1)
   {
      ft_lstadd_back(head, ft_lstnew(ft_strdup(&line)));
      free(line);
      i++;
   }
   ft_print_list(head);
}


  


    