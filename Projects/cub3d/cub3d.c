
#include "variables/cub3d.h"

int main()
{
   ft_file("infos.cub");

   ft_initialize_mlx();
   
    printf("tile -width = %f\n",config.tile_width);
    printf("tile_height = %f\n",config.tile_height);
    printf("max line = %d\n",config.max_length);
    printf("list size = %d\n",ft_lst_size(config.head));
   ft_put_map(STEELBLUE);
   ft_put_player(MAROON);
   ft_cast_all_rays();
   //ft_print_rays();
  
   mlx_put_image_to_window(config.mlx,config.mlx_win,config.image_win.img,0,0);
   
   mlx_hook(config.mlx_win, 2, 0, deal_key, (void *)0);
   mlx_loop(config.mlx);
   return EXIT_SUCCESS;
}