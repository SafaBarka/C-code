#include "../../headers/functions.h"

int ft_read_file(char *filename)
{
    int fd;
    char *line;
    int i;
    i = 1;

   //------------------------------------------
   
    if ((fd = open(filename,O_RDONLY)) <= 0){
       printf("not valid file\n");
       return 0;
    }
    printf("fd = %d\n",fd);
   //-------------------------------------------
   ft_initialize_config();
   ft_initialize_player();
   //-------------------------------------------
    while(i)
    {
      i = get_next_line(fd,&line);
      if (i == 0) //end of file
         config.indice_last_line = 1;
       //set configuration of elements in file
       if(ft_set_configuration(line) == 0)
         return 0;
    }
    if (player.playerFound != 1)
    {
       printf("player is misisng!!\n");
       return 0;
    }
    printf("position x (player) = |%f|\n",player.x);
    printf("position y of (player)  |%f|\n",player.y);
    if (player.playerNorth)
       printf("player position is north\n");
   else if (player.playerSouth)
      printf("player position is south\n");
   else if (player.playerEast)
      printf("player position is east\n");
   else if (player.playerWest)
      printf("player position is west\n");


    //---------------------------------------------
    if(! ft_store_map_array())
        return 0;
    //---------------------------------------------
   if (close(fd) == -1){
      printf("the file doesn't close\n");
      return 0;
   }
   //------------------------------------------------
   return 1;
}