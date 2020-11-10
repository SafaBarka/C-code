#include "../cub3d.h"
#define confetti 0xEDED61
#define sulu 0xCAED61
#define blue 0x6188ED
#define yellow 0xffff00
void ft_draw_map()
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
                ft_draw_rectangle(x,y,blue);
            }
            else if (config.map[r][c] == '0')
            {
                ft_draw_rectangle(x,y,confetti);

            }else if (config.map[r][c] == ' ')
                ft_draw_rectangle(x,y,sulu);

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
        i = x + config.tile_width;
        j = y + config.tile_height;
        while ( x < i)
        {
            while (y <j)
            {
                    if (x  == (i - config.tile_width)  ||  x == i -1   ||
                    y == (j - config.tile_height) || y == j -1)
                    {
                      
                      ft_put_pixel_to_image(x,y,yellow,1);
                    }else
                        ft_put_pixel_to_image(x,y,color,1);
                    y++;
            }
            x++;
            y = j - config.tile_height;
        }
       
}