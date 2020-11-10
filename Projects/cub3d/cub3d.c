#include "cub3d.h"

int main()
{
   
    int fd;
    config.erro.message = "";
    
    fd = ft_open_file("infos.cub");
    ft_check_exit();

   
    ft_initialize_config();
    
    ft_read_file(fd);

   /* printf("player : rotationAngle = %f\n x = %f\n y = %f\nis_north = %d\nis_West = %d\nis_east = %d\nis_south =%d\n",
            config.player->rotationAngle,
            config.player->x,
            config.player->y,
            config.player->player_north,
            config.player->player_west,
            config.player->player_east,
           config.player->player_south );
    */
   //ft_print_list(config.head)
    ft_set_array();
    printf("width = %f\nheight = %f\ntile_width = %d\ntile_height = %d\nmax_length = %d\ncolumns = %d\nrows = %d\n",
    config.width,
    config.height,
    config.tile_width,
    config.tile_height,
    config.max_length,
    config.columns,
    config.rows
    );
   
    printf("----------------\n");
   // ft_print_array();

    ft_initialize_mlx();
   
   ft_draw_map();
    mlx_put_image_to_window(config.mlx,config.mlx_win,config.image->img,0,0);

    
    mlx_loop(config.mlx);
    
  
    return EXIT_SUCCESS;
}

