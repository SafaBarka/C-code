#include "headers/functions.h"

int main()
{
    ft_initialize_mlx();
    
    for(int y = 0 ; y <1080; y++)
   {
        for (int x = 0 ; x <1920; x++)
        {
            printf("(%d, %d)  ",x,y);
            ft_put_pixel_to_image(x,y,BLUE);
        }
        printf("\n"); 
   }
    //Display the image
    //use mlx_put_image_to_window() function.
    //pushing images to a window.
    //first 0 is the x position of your image on the window.
    //the second 0 is the y position.
    mlx_put_image_to_window(mlx,mlx_win,image_win.img,0,0);

    //initiate the window rendering 
    mlx_loop(mlx);
}