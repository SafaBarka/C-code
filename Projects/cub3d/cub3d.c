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
    //fill the image using formula (X position * 4 + 4 * Line_size * Y position)

void put_pixel(int x, int y, int color)
{
    char *dst;
    //y * my_image.line_length *4 + x * 4
    //4(y * my_image.line_length + x)
    //(32/8)*(y * my_image.line_length + x)
    //(my_image.bits_per_pixel/8) * (y * my_image.line_length + x)
    dst = my_image.addr + ((my_image.bpp/8) * (y * my_image.line_length + x));

    //color information is stored as four individual 8-bit unsigned integer components.
    *(unsigned int*)dst = color;
}
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
    
    //fill the image using formula (X position * 4 + 4 * Line_size * Y position)
    put_pixel(0,0,0xEF4135);
    put_pixel(1,0,0xEF4135);
    put_pixel(2,0,0xEF4135);
    put_pixel(3,0,0xEF4135);

 
    //Display the image
    //use mlx_put_image_to_window() function.
    //pushing images to a window.
    //first 0 is the x position of your image on the window.
    //the second 0 is the y position.
    mlx_put_image_to_window(mlx,mlx_win,my_image.img,0,0);

    //initiate the window rendering 
    mlx_loop(mlx);

}
int main()
{
    initialize_mlx();
}