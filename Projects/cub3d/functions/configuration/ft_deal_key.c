#include "../../variables/cub3d.h"

int deal_key(int key, void *param)
{
   
   initialize_turnwalk();
   mlx_clear_window(config.mlx, config.mlx_win);
    if ( key == 126) //up
    {
        printf("up\n");
        player.walkDirection = +1;
    }
    else if(key == 125) // down
    {
        printf("down\n");
        player.walkDirection = -1;
    }
    else if(key == 124) //right
    {
        printf("right\n");
        player.turnDirection = +1;
    }
    else if( key == 123)//left
    {
        printf("left\n");
        player.turnDirection = -1;
    }
    ft_update();
    //ender_update();
    return 1;
}