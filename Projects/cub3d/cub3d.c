
#include "headers/functions.h"

int main()
{
    if (!ft_read_file("infos.cub"))
        return 0;
    
    ft_initialize_mlx();
    
    ft_display_map(BLUE);

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