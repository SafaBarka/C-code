#include "cub3d.h"

int main()
{
   
    int fd;
    config.erro.message = "";
    
    fd = ft_open_file("infos.cub");
    ft_check_exit();

   
    ft_initialize_config();
    
    ft_read_file(fd);

    ft_set_array();
   
    
    ft_initialize_mlx();
   // printf("width = %d\n height = %d\n",config.width, config.height);

     ft_cast();
   ft_render_3d();
    //config.width = config.columns * config.tile_width;
    //config.height = config.rows * config.tile_height;
   // ft_print_array();
   // ft_draw_map(blue);
   // ft_draw_player(config.player->x, config.player->y,red);
   // ft_print_rays();

    mlx_put_image_to_window(config.mlx,config.mlx_win,config.image.img,0,0);

    mlx_hook(config.mlx_win, 2, 1L << 0, deal_key, (void *)0);
    mlx_loop(config.mlx);
    
  
    return EXIT_SUCCESS;
}

