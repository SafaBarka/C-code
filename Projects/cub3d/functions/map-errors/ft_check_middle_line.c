#include "../../headers/functions.h"

int ft_check_middle_line(char *line)
{
    int len = ft_strlen(line);
    int i = 1;
    //the line must start with '1' or ' '
    if ((line[0] != ' ' && line[0] != '1') || (line[len -1] != ' ' && line[len -1]  != '1'))
    {
        printf("the line isn't closed |%c|\n",line[0]);
        return 0;
    }
    while (i < len -1)
    {
        if (player.playerFound == 0 && line[i] == 'N')
        {
            player.x = i;
            player.y = config.cptLineMap;
            player.playerFound = 1;
            player. playerNorth = 1;
        }else if (player.playerFound == 0 && line[i] == 'S')
        {
            player.x = i;
            player.y = config.cptLineMap;
            player.playerFound = 1;
            player.playerSouth= 1;
        }else if (player.playerFound == 0 && line[i] == 'W')
        {
             player.x = i;
            player.y = config.cptLineMap;
            player.playerFound = 1;
            player.playerWest = 1;
        }else if (player.playerFound == 0 && line[i] == 'E')
        {
            player.x = i;
            player.y = config.cptLineMap;
            player.playerFound = 1;
            player.playerEast = 1;
        }else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W' || line[i] == 'E')
        {
            printf("redefined player in map \n");
            return 0;
        }else if (line[i] == '2')
        {
            printf("sprit things\n");
        }
        else if (line[i] != '1' && line[i] != ' ' && line[i] != '0')
        {
            printf("the element |%c| not valid in map\n",line[i]);
            return 0;
        }
       i++;
    }
    return 1;
}