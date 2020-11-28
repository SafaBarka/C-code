#include "../cub3d.h"

void ft_update()
{
   
  ft_draw_black_screen();
    
    ft_update_player();
    ft_cast();
    ft_render_3d();
     

   // ft_draw_map();
   //ft_draw_player(config.player->x, config.player->y,red);
  //  ft_print_rays();

    mlx_put_image_to_window(g_c.mlx,g_c.mlx_win,g_c.img.im,0,0);

}

//free(config.image->img);
//free(config.image->addr);
//free(config.image);
   
//config.image = malloc(sizeof(image_data ));

//config.image->img = mlx_new_image(config.mlx,config.width, config.height);
//config.image->addr = mlx_get_data_addr(config.image->img, &config.image->bpp,
//&config.image->line_length,&config.image->endian);
