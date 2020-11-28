#include "../cub3d.h"

int ft_has_wall(float x, float y)
{
    
    if (x < 0 || x > g_c.temp_w|| y < 0 || y > g_c.temp_h) {
            return 1;
        }
     int a = floor(x / g_c.tw );
     int b = floor(y /g_c.th);
    int c = g_c.map[b][a];
    return c;
}