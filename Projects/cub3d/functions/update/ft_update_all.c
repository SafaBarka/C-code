#include "../../headers/functions.h"
void ft_update_all()
{
    //ft_delete_window();
   
   
    free(image_win.img);
    free(image_win.addr);
    image_win.img = mlx_new_image(mlx,config.r_width, config.r_height); //1920 - 1080

    //the image address
    //the current data address
    image_win.addr = mlx_get_data_addr(image_win.img, &image_win.bpp, &image_win.line_length,&image_win.endian);

     ft_display_map(BLUE);
    
     ft_update_player_position();
    ft_display_player(SALMON);
    mlx_put_image_to_window(mlx,mlx_win,image_win.img,0,0);
}