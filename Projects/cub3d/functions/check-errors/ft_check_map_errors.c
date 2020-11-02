#include "../../variables/cub3d.h"

void ft_check_first_last_line(char *line)
{
    int i ;

    i = 0;
    while(line[i])
    {
            if (line[i] != ' ' && line[i] != '1')
            {
                if (config.head == NULL)

                    perror("the first map row contains not valid caractere");
                else
                     perror("the last map row contains not valid caractere");
                exit(EXIT_FAILURE);            
            }
            i++;
    }
    
    
}
void ft_check_first_spaces(char *line)
{
    int i = 0;
    while(line[i] == ' ')
        i++;
    if ( line[i] != '1')
    {
        perror("the map is not closed");
        exit(EXIT_FAILURE); 
    }
}

void ft_check_last_spaces(char *line)
{
    int i = ft_strlen(line) - 1 ;
    while(line[i] == ' ')
        i--;
    if ( line[i] != '1')
    {
        perror("the map is not closed");
        exit(EXIT_FAILURE); 
    }
}
void ft_check_middle_lines(char *line)
{
    int len ;
    int i ;

    len = ft_strlen(line);
    i = 1;
    
    if ((line[0] != ' ' && line[0] != '1') || (line[len -1] != ' ' && line[len -1]  != '1'))
    {

        perror("the line isn't closed");
        exit(EXIT_FAILURE);
    }
   
     while (i < len -1)
    {
       
        if (player.player_found == 0 && line[i] == 'N')
        {
            player.rotationAngle = (3 * M_PI) / 2 ;// -(M_PI/ 2);
            player. player_north = 1;
              player.x = i ;
            player.y = config.nbr_lines;
            player.player_found = 1;

       }else if (player.player_found == 0 && line[i] == 'S')
        {
            player.rotationAngle = (M_PI / 2);
            player.player_south= 1;
                     player.x = i ;
            player.y = config.nbr_lines;
            player.player_found = 1;
        }else if (player.player_found == 0 && line[i] == 'W')
        {
            player.rotationAngle = (M_PI);
            player.player_west = 1;
                     player.x = i ;
            player.y = config.nbr_lines;
            player.player_found = 1;
        }else if (player.player_found == 0 && line[i] == 'E')
        {
             player.rotationAngle = 0;
            player.player_east = 1;
                     player.x = i ;
            player.y = config.nbr_lines;
            player.player_found = 1;
        }
        else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W' || line[i] == 'E')
        {
            perror("redefined player in map ");
            exit(EXIT_FAILURE);
        
        }else if (line[i] == '2')
        {
          //  printf("sprit things\n");
        }
        else if (line[i] != '1' && line[i] != ' ' && line[i] != '0')
        {
            perror("the element not valid in map");
            exit(EXIT_FAILURE);
        
        }
       i++;
    }
    
   
}