#include "../../variables/cub3d.h"

void     ft_file(char *filename)
{
    int fd;
   
    if ((fd = open(filename,O_RDONLY)) < 0){
       perror("failed to open file");
       exit(EXIT_FAILURE);
    }

    ft_initialize_config();

   ft_read_file(fd);

}