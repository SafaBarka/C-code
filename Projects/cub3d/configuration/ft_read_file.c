#include "../cub3d.h"

void ft_read_file(int fd)
{
    int i = 1;

    char *line;

    if ((i = get_next_line(fd,&line)) < 0)
        config.erro.message = "failed to read file";
    else if ( i == 0)
        config.erro.message = "the file is empty ";
  
    while(i > 0)
    {
      
        ft_check_line(line,i);
        free(line);
        i = get_next_line(fd, &line);
    }
    if ( i < 0)
        config.erro.message = "failed to read file";
    ft_check_line(line,i);
    free(line);

    
   
 



}