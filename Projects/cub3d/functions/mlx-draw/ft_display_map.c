#include "../../headers/functions.h"

void ft_display_map(int color)
{
    
    int x;
    int y;
    int r;
    int c;

    x = 0;
    y = 0;
    r = 0;
    c = 0;

      while (r < config.nbr_rows )
   	{
          
       while (c < config.nbr_columns)
        {
            if (map[r][c] == '1')
            {
                ft_draw_rectangle(x,y,color);
            }
            else if (map[r][c] == '0')
            {
                ft_draw_rectangle(x,y,GREEN);

            }else if (map[r][c] == ' ')
            {
                ft_draw_rectangle(x,y,yellow);
            }
            x = x+config.TILE_SIZE_width   ;
            c++;
        }
        x = 0;
        y = y+config.TILE_SIZE_height ;
        c = 0;
        r++;
    }  
}