#include "../cub3d.h"

void ft_read_file(int fd)
{
    int i = 1;

    char *line;

    if ((i = get_next_line(fd,&line)) < 0)
        ft_check_exit("failed to read file");
    if ( i == 0)
        ft_check_exit("the file is empty ");
  
    while(i > 0)
    {
        ft_check_line(line,i);
        free(line);
        i = get_next_line(fd, &line);
    }
    if ( i < 0)
        ft_check_exit("failed to read file");
    ft_check_line(line,i);
    free(line);
    if (config.nbr_variables == 0 )
        ft_check_exit("variables are missing");
    if (config.found_map == 0)
        ft_check_exit("the map is missing");
    else if (config.player->player_found == 0)
       ft_check_exit("the player is missing");
   

    
   
 



}