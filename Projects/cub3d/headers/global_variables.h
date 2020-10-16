#include "structs.c"
#include <math.h>
#include <stdio.h>
#include <mlx.h>

#define BLUE  0x0000cc
#define GREEN 0x00b050
#define MALACHITE 0x108070
#define TILE_SIZE  60
#define MAP_COLS        29
#define MAP_ROWS        14 
#define WINDOW_WIDTH    TILE_SIZE * MAP_COLS
#define WINDOW_HEIGHT   TILE_SIZE * MAP_ROWS
void *mlx;

void *mlx_win;

t_data image_win;

Player player;

