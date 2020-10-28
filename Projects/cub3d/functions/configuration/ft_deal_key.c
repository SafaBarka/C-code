#include "../../headers/functions.h"

int ft_deal_key(int key, void *param)
{
    ft_delete_window();
    ft_initialize_turn_walk_directions();
    if ( key == 126) //up
        player.walkDirection = 1;
    else if(key == 125) // down
        player.walkDirection = -1;
    else if(key == 124) //right
        player.turnDirection = +1;
    else if( key == 123)//left
        player.turnDirection = -1;

    ft_update_all();

    return 1;
}