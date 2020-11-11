#include "../cub3d.h"
int deal_key(int key, void *param)
{
    
    ft_initialize_turn_walk();
    
    if ( key == 126) //up
    {
        
        //printf("up\n");
        config.player->walkDirection = +1;
    }
    else if(key == 125) // down
    {
        //printf("down\n");
        config.player->walkDirection = -1;
    }
    else if(key == 124) //right
    {
        //printf("right\n");
        config.player->turnDirection = +1;
    }
    else if( key == 123)//left
    {
        //printf("left\n");
        config.player->turnDirection = -1;
    }
    else if (key == 53 ) //esc
    {
        printf("exit\n");
        mlx_destroy_window(config.mlx,config.mlx_win);
        exit(EXIT_SUCCESS);
    }
 
    ft_update();
    return 1;
}

