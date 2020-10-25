#include "../../headers/functions.h"

void ft_initialize_mlx()
{
    //establish a connection to the correct graphical system
    mlx= mlx_init();

    //create a window
    //width = 1920
    //height = 1080
    mlx_win = mlx_new_window(mlx, config.r_width, config.r_height,"cub3d");

    //create an image
    image_win.img = mlx_new_image(mlx,config.r_width, config.r_height); //1920 - 1080

    //the image address
    //the current data address
    image_win.addr = mlx_get_data_addr(image_win.img, &image_win.bpp, &image_win.line_length,&image_win.endian);
       
}