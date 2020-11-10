#include "../cub3d.h"

void ft_check_first_last_line(char *line)
{
    int i ;

    i = 0;
    while(line[i])
    {
            if (line[i] != ' ' && line[i] != '1')
                config.erro.message = "not valid map";
            i++;
    }
    
    ft_check_exit();
}
void ft_check_close_bounds(char *line)
{
    int i ;
    
    i = 0;
    while(line[i] == ' ')
        i++;
    if ( line[i] != '1')
        config.erro.message = "not valid map";
    i = ft_strlen(line) - 1 ;
    while(line[i] == ' ')
        i--;
    if (line[i] != '1')
        config.erro.message = "not valid map";

    ft_check_exit();
}


void ft_check_middle_lines(char *line)
{
    int len ;
    int i ;

    len = ft_strlen(line);
    i = 1;
   
    while (i < len -1)
    {
        if (config.player->player_found == 0 && line[i] == 'N')
            ft_set_player(i, (3 *M_PI)/2 , line[i]);
        else if (config.player->player_found == 0 && line[i] == 'S')
            ft_set_player(i, (M_PI/ 2) , line[i]);
        else if (config.player->player_found == 0 && line[i] == 'W')
            ft_set_player(i, M_PI , line[i]);
        else if (config.player->player_found == 0 && line[i] == 'E')
            ft_set_player(i, 0 , line[i]);
        else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W' || line[i] == 'E')
            config.erro.message = "redefined player in map ";
        else if (line[i] == '2')
        {
          //  printf("sprit things\n");
        }
        else if (line[i] != '1' && line[i] != ' ' && line[i] != '0')
            config.erro.message = "the element not valid in map";
        ft_check_exit();
       i++;
    }
    
   
}