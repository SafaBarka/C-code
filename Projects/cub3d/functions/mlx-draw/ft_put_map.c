#include "../../variables/cub3d.h"

void ft_put_map(int color)
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
                ft_put_rectangle(x,y,BROWN);
            }
            else if (config.map[r][c] == '0')
            {
                ft_put_rectangle(x,y,WHITE);

            }
            x = x+config.tile_width  ;
            c++;
        }
        x = 0;
        y = y+config.tile_height ;
        c = 0;
        r++;
    }  
}

/*  else if (map[r][c] == '0')
{
    ft_draw_rectangle(x,y,GREEN);

}else if (map[r][c] == ' ')
{
    ft_draw_rectangle(x,y,SALMON);
}*/