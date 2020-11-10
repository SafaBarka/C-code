#include "../cub3d.h"

void ft_initialize_mlx()
{
  
    if (
            !(config.mlx  = mlx_init())

            || !(config.mlx_win = mlx_new_window(config.mlx, config.width
                                            ,config.height,"cub3d"))
            ||!(config.image = malloc(sizeof(image_data )))

            ||!(config.image->img = mlx_new_image(config.mlx,config.width, config.height))

            ||!(config.image->img = mlx_new_image(config.mlx,config.width, config.height))

            ||!(config.image->addr = mlx_get_data_addr(config.image->img, &config.image->bpp,
            &config.image->line_length,&config.image->endian))
        )
            config.erro.message = "failed to use the graphical system";

        ft_check_exit();
     
 
}