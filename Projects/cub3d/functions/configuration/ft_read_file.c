#include "../../variables/cub3d.h"

int ft_read_file(int fd)
{
    int i ;
    char *line;

    i = 1;
    line = NULL;
  //empty file to check later ??? 
    while(i)
    {
      if ((i = get_next_line(fd,&line)) < 0 )
      {
          perror("failed to read file");
          exit(EXIT_FAILURE);
      }
      if (i == 0)
         config.last_line = 1;
       ft_set_configuration(line) ;  //STORE MAP IN LINKED LIST 
    }
    if (config.found_map == 0 )
    {
        perror("the map is missing");
        exit(EXIT_FAILURE);
    }

     ft_set_array_2d(); //STORE LINKED LIST IN ARRAY2D
     //CHECK SPACES  if closed 

     

    return 1;
}