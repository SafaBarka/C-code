#include "../cub3d.h"

// for keeping my angle between 0 and 2 M_PI (0 - 360)
//if it is negative keep it positive
float ft_normalize_angle(float angle)
{
   angle= fmod(angle, 2 * M_PI);
    if (angle < 0)
        angle= (2 * M_PI) + angle; // pushing it to the positive side
    return angle;
}