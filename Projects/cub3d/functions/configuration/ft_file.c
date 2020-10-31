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

  /*  

   char *line;
    int i;
    i = 1;
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
  
    //---------------------------------------------
    if(! ft_store_map_array())
        return 0;
   //------------------------------------------------
   player.x = (player.x * config.TILE_SIZE_width) + (config.TILE_SIZE_width / 2);
   player.y = (player.y * config.TILE_SIZE_height) - (config.TILE_SIZE_height / 2);
   //---------------------------------------------------------------------------------

    //---------------------------------------------
   if (close(fd) == -1){
      printf("the file doesn't close\n");
      return 0;
   }
   //------------------------------------------------
   */

}