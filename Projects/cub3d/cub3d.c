#include "cub3d.h"

int main()
{
    int fd; 
    fd = ft_open_file("infos.cub");

    ft_initialize_config();
    ft_initialize_player();

    ft_read_file(fd) ;
    ft_set_array();
    ft_check_close_spaces();
    ft_initialize_mlx();
    ft_cast();
    ft_render_3d();
    mlx_put_image_to_window(config.mlx,config.mlx_win,config.image.img,0,0);
    mlx_hook(config.mlx_win, 2, 1L << 0, deal_key, (void *)0);
    mlx_loop(config.mlx);

    return EXIT_SUCCESS;
}

