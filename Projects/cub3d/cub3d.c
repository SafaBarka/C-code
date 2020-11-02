
#include "variables/cub3d.h"

int main()
{
   ft_file("infos.cub");

   ft_initialize_mlx();
    ft_put_map(BROWN);
   
   ft_put_player(yellow);
   mlx_put_image_to_window(config.mlx,config.mlx_win,config.image_win.img,0,0);
   
   mlx_hook(config.mlx_win, 2, 0, deal_key, (void *)0);
   mlx_loop(config.mlx);
   return EXIT_SUCCESS;
}