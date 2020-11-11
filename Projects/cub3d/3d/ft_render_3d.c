#include "../cub3d.h"

void ft_render_3d()
{
  int i = 0;
  while(i < config.num_rays  )
  {
       
  
    float perpdistance;
    if (config.rays[i].distance != 0)
        perpdistance = config.rays[i].distance * cos(config.rays[i].rayAngle - config.player->rotationAngle);
    else
    {
            perpdistance = 1;
    }
    
        float distanceProjPlane = (config.width /2) /tan(config.fov / 2);
       float projectedWallHeight =(config.tile_height /perpdistance) *distanceProjPlane;

        int WALLstripHeight = (int)projectedWallHeight;
      
       int walltoppixel = (config.height /2)- (WALLstripHeight/2);
       walltoppixel = walltoppixel < 0 ? 0 :walltoppixel;

        int wallBottompixel =(config.height/2) +(WALLstripHeight/2);
        wallBottompixel = wallBottompixel > config.height ?config.height:wallBottompixel;
        int y = 0;

     
   while (y < walltoppixel )
        {
          
            ft_put_pixel_to_image(i * config.wall_strip_width,y,0xC9F8FE,0);
            y++;
        }
         y = walltoppixel;
        while (y < wallBottompixel)
        {
            ft_put_pixel_to_image(i * config.wall_strip_width,y,0xCD0000,0);
            y++;
        }
        y = wallBottompixel -1;
         while (y <config.height)
        {
            ft_put_pixel_to_image(i *config.wall_strip_width,y ,0xFFFFFF,0);
            y++;
        }

        
     
        i++;
    }
}
