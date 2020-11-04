#include "../../variables/cub3d.h"

// for keeping my angle between 0 and 2 M_PI (0 - 360)
//if it is negative keep it positive
float ft_normalize_angle(Ray *ray)
{
    ray->rayAngle = fmod(ray->rayAngle, 2 * M_PI);
    if (ray->rayAngle < 0)
        ray->rayAngle = (2 * M_PI) + ray->rayAngle; // pushing it to the positive side
    return ray->rayAngle;
}