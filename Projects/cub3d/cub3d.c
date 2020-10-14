#include "mlx.h"
//image == char pointer
//pixel = 4 chars

//-------------------------------

typedef struct s_data {
    void    *img;

    char    *addr;

    //the number of bits per pixel = 32
    int     bpp;

    //example = width 1920 
    //the width of one line of pixel. = 1920 * 4
    //the size of a line times 4 = 1920 * 4
    int     line_length;

    //endian = 0 or 1 depending of the archetecture of the computer
    int     endian;
}           t_data;

//-------------------------------

void *mlx;
void *mlx_win; 
t_data  my_image;

//-------------------------------

void initialize_mlx()
{
    //establish a connection to the correct graphical system
    mlx= mlx_init();

    //create a window
    //width = 1920
    //height = 1080
    mlx_win = mlx_new_window(mlx, 1920, 1080,"cub3d");

    //create an image
    my_image.img = mlx_new_image(mlx,1920,1080);

    //the image address
    //the current data address
    my_image.addr = mlx_get_data_addr(my_image.img, &my_image.bpp, &my_image.line_length,&my_image.endian);
    
    //initiate the window rendering 
    mlx_loop(mlx);

}
int main()
{
    initialize_mlx();
}