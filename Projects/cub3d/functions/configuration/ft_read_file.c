#include "../../variables/cub3d.h"

int ft_read_file(int fd)
{
    int i ;
    char *line;

    i = 1;
    line = NULL;

    while(i)
    {
      if ((i = get_next_line(fd,&line)) < 0 )
      {
          perror("failed to read file");
          exit(EXIT_FAILURE);
      }
      if (i == 0)
         config.last_line = 1;
       ft_set_configuration(line) ;
        
    }
    return 1;
}