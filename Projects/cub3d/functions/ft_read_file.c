#include "../headers/functions.h"

int ft_read_file(char *filename)
{
    int fd;
    char *line;

    fd = open(filename,O_RDONLY);

    //if fd <= 0 return error : "not valid file"
    
    ft_initialize_config();

    while(get_next_line(fd,&line))
    {
       
       //set configuration of elements in file
       if(ft_set_configuration(line) == 0)
         return 0;
    }
   // return an error if the close doesn't work well "the file doesn't closed"
   ft_print_list(config.head);
   close(fd);

   return 1;
}