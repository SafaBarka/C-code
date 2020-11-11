#include "../cub3d.h"

void ft_draw_map(int color)
{
    
    int x;
    int y;
    int r;
    int c;

    x = 0;
    y = 0;
    r = 0;
    c = 0;

      while (r < config.rows)
   	{
          
       while (c < config.columns)
        {
           if (config.map[r][c] == '1')
            {
                ft_draw_rectangle(x,y,color);
            }
            else if (config.map[r][c] == '0')
            {
                ft_draw_rectangle(x,y,confetti);

            }else if (config.map[r][c] == ' ')
                ft_draw_rectangle(x,y,sulu);
            //else if (config.map[r][c] == 'N')
            //     ft_draw_rectangle(x,y,color);

           x = x+config.tile_width  ;
          
            c++;
        }
        x = 0;
        y = y+config.tile_height ;
       
        c = 0;
        r++;
    }  

    
}

void ft_draw_rectangle(int x , int y, int color)
{
        int i ;
        int j;
       
        i = x + config.tile_width ;
        j = y + config.tile_height;
        while ( x < i)
        {
            while (y <j)
            {
                  //  if (x  == (i - config.tile_width)  ||  x == i -1   ||
                  //  y == (j - config.tile_height) || y == j -1)
                  //  {
                      
                  //    ft_put_pixel_to_image(x,y,yellow,1);
                  //  }else
                        ft_put_pixel_to_image(x,y,color,1);
                    y++;
            }
            x++;
           // y = j - config.tile_height;
           y = j - config.tile_height;
        }
       
}