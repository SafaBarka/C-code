#include "../../variables/cub3d.h"

void initialize_turnwalk()
{
    player.turnDirection = 0;
    player.walkDirection = 0;
}

void ft_update()
{
     
    free(config.image_win.img);
    free(config.image_win.addr);
    config.image_win.img = mlx_new_image(config.mlx,config.width, config.height); 

    config.image_win.addr = mlx_get_data_addr(config.image_win.img, &config.image_win.bpp, &config.image_win.line_length,&config.image_win.endian);
    ft_put_map(BROWN);
    update_player_position();
    ft_put_player(BLUE);
    ft_cast_all_rays();
    ft_print_rays();
    mlx_put_image_to_window(config.mlx,config.mlx_win,config.image_win.img,0,0);
}

int has_wall(double x, double y)
{
    if (x < 0 || x > config.width|| y < 0 || y >config.height) {
            return 1;
        }
     int a = floor(x / config.tile_width);
     int b =floor(y /config.tile_height);
     int c = config.map[b][a];
    return c;
}

void update_player_position()
{
    player.rotationAngle += player.turnDirection * player.rotationSpeed;

    double moveStep = player.walkDirection *player.moveSpeed;
    
    double newX= player.x +cos(player.rotationAngle) * moveStep ;
    double newY= player.y + sin(player.rotationAngle) * moveStep ;
    if (!(has_wall(newX , newY) == '1'))
    {
        player.x = newX;
        player.y = newY;
    }
}