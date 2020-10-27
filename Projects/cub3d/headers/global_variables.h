#include "structs.c"
#include <math.h>
#include <stdio.h>
#include <mlx.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../functions/helper-functions/get_next_line/get_next_line.h"
#define BLUE  0x0000cc
#define GREEN 0x00b050
#define yellow 0xFFFF00
#define SALMON 0xFA8072
Config config;
Player player;
char **map;

void *mlx;

void *mlx_win;

t_data image_win;




