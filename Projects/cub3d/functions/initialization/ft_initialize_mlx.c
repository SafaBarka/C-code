#include "../../variables/cub3d.h"

void ft_initialize_mlx()
{
    printf("width = %f\n",config.width);
    printf("height = %f\n",config.height);
    config.mlx = mlx_init();

    config.mlx_win = mlx_new_window(config.mlx, config.width, config.height,"cub3d");

  
    config.image_win.img = mlx_new_image(config.mlx,config.width, config.height); 

    config.image_win.addr = mlx_get_data_addr(config.image_win.img, &config.image_win.bpp,
                                                &config.image_win.line_length,&config.image_win.endian);
}