#include "../cub3d.h"

void ft_initialize_mlx()
{
  
g_c.mlx  = mlx_init();

g_c.mlx_win = mlx_new_window(g_c.mlx, g_c.w,g_c.h,"cub3d");


g_c.img.im = mlx_new_image(g_c.mlx,g_c.w, g_c.h);

g_c.img.addr =(unsigned int *) mlx_get_data_addr(g_c.img.im, &g_c.img.bpp,&g_c.img.ll,&g_c.img.e);
          //  config.erro.message = "failed to use the graphical system";

        //ft_check_exit();
     
 
}