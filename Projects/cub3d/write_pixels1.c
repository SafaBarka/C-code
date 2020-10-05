//Before we can do anything with the MinilibX Library we must include the (<mlx.h>)
//header to access all the functions .
#include "minilibx/mlx.h"

typedef struct s_data {

    void *img;

    char *addr;

    int bits_per_pixel;

    int line_length;

    int endian ;

}   t_data;

void my_mlx_pixel_put(t_data *data, int x, int y, int color)
{

    char *dst;

    dst = data->addr + (y * data->line_length + x *(data->bits_per_pixel/8));

    *(unsigned int*)dst = color;
}
int main()
{
    //we should execute the (mlx_init) function. This will establish a (connection)
    //to (the correct graphical system) .
    //it will (return a void*) which holds the location of our current (MLX instance) .
    //To initilize MiniLIBX one could do the following.
    void *mlx;
    mlx = mlx_init();

    //when you run the previous code , you can't help but notice that (nothing pops up) and that (nothing is being rendered).
    //well,this obviously has something to do with the fact that (you are not creating a window yet),
    //so lets try initilizing a tiny window which will stay open forever.
    //you can close it by pressing CTRL+C in your terminal.
    
    //to achieve this , we will simply call the (mlx_new_window) function,
    //which will (return a pointer to the window) we have just created.

    //we can give the (window) a (height), (width) and a (title).

    void *mlx_win;

    //create a window with a (width of 1920) , a (height of 1080) and a (name of "cub3d!")
    mlx_win = mlx_new_window(mlx,1920,1080,"cub3d");

    //(Writing pixels to a image)
    //we have a (basic window management), we can get started with (pushing pixels to the window).
    //first of all we should take into account that the (mlx_pixel_put) function is (very, very slow).
    //this is (because it tries to push the pixel (instantly) to the window )(without waiting for the frame to be entirely rendered).

    //because of this sole reason, we will have to (buffer all our pixels to a image), wich we will (then push to the window).

    //first of all , we should start by understanding (what type of image mlx requires).
    //if we (initiate an image), we will have to pass a (few pointers) to which it will write a few important variables.
    //the first one is the (bpp), also called (the bits per pixel) . as (the pixels are basically ints), these usually are (4 bytes).

    t_data img;

    img.img =mlx_new_image(mlx, 1920, 1080);

    /*
    (after creating an image), we can call ("mlx_get_data_addr"),we pass
    ('bits_per_pixel'), ('line_length') , and ('endian') by reference . These will
    then be set accordingly for (the 'current' data address).
    */

    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);

    //notice how we pass the (bits_per_pixel) , (line_length) and (endian) variables by reference?
    //these will be set accordingly by MiniLIBX.

    //now we have (the image address), but (still no pixels).
    //we must understand that (the bytes are not aligned), this means that the
    //(line_length) differs from the actual (window width).
    //we therefore should always calculate (the memory offset) using the (line length) set by (mlx_get_data_addr).
    
    //we can calculate it very easly by using the following formula
    //int offset = (y * line_length + x * (bits_per_pixel / 8));


    // (an image is represented in real time in a window), changing the same image will cause a bunch
    //of (screen-tearing) when writing to it .
    //you should therefore (create two or more images to hold your frames temporarily).
    //you can then write to a (temporary image), (so that you don't have to write to the currently presented image.)

    //Pushing images to  a window
    //we can finally create our image, we should also push it to the window , so that 
    //we can actually see it .

    //write a red pixel at (5,5) and put it to our window

    my_mlx_pixel_put(&img,5,5,0x00FF0000);
    my_mlx_pixel_put(&img,5,6,0x00FF0000);
    my_mlx_pixel_put(&img,5,7,0x00FF0000);
    //0x00FF0000 is the hex representation of ARGB(0,255,0,0)
    mlx_put_image_to_window(mlx,mlx_win,img.img,0,0);

    //then will have to call (mlx_loop) to (initiate the window rendering).
    mlx_loop(mlx);
}

//gcc write_pixels1.c  minilibx/libmlx_Linux.a -lXext -lX11 -lm