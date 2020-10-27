
#include "headers/functions.h"

int main()
{
    if (!ft_read_file("infos.cub"))
        return 0;
    
    ft_initialize_mlx();
    
    ft_display_map(BLUE);
  
   player.x = (player.x * config.TILE_SIZE_width) + (config.TILE_SIZE_height / 2) ;
   player.y = (player.y * config.TILE_SIZE_height) - (config.TILE_SIZE_height / 2);
   printf("player x = %f\n",player.x);
   printf("player.y = %f\n",player.y);
    ft_display_player(SALMON);

    //Display the image
    //use mlx_put_image_to_window() function.
    //pushing images to a window.
    //first 0 is the x position of your image on the window.
    //the second 0 is the y position.
    mlx_put_image_to_window(mlx,mlx_win,image_win.img,0,0);

    //initiate the window rendering 
    mlx_loop(mlx);

    return 1;
}
/*
11111111111111111111111111
111111101100000000000001
1011000001110000002000001
1001000000000000000000001
111111111011000001110000000000001
100000000011000001110111111111111
1111011111111101100000010001
1111011111111101011101010010001
11000000110101011100000010001
10002000000000001100000010001
10000000000000001101010010001
11000001110101011111011110N0111
11110111 1110101 101111010001
11111111 1111111 1111111111111
*/