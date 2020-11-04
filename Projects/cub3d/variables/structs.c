

typedef struct s_data {
    void    *img;

    char    *addr;

    //the number of bits per pixel = 32
    int     bpp;

    //example = width 1920 
    //the width of one line of pixel. = 1920 * 4
    //the size of a line times 4 = 1920 * 4
    int     line_length;

    //endian = 0 or 1 depending of the archetecture of the computer
    int     endian;
}           image_data;

typedef struct s_list {
   char *line;
   struct s_list* next;
}  t_list;

typedef struct ray{

    double rayAngle;

    double hitXhorz;
    double hitYhorz;

    double hitXVert;
    double hitYVert;

    double distanceHorz;
    double distanceVert;

    double xstep;
    double ystep;

    double xinterceppt ; 
    double yintercept;

    int isRayFacingDown;
    int isRayFacingUp ;
    int isRayFacingRight;
    int isRayFacingLeft;

    double nextHorzX ;
    double nextHorzY;

    double nextVertX ;
    double nextVertY;

    double wallHitX;
    double wallHitY;

    int foundHorzWallHit;
    int foundVertWallHit;


    
}Ray;

typedef struct config
{
    /* minilibx configuration */

    void *mlx ;
    void *mlx_win;
    image_data  image_win;


    /* resolution */
    double width; 
    double height; 

    double tile_width;
    double tile_height;

    int columns; //nbr columns of map
    int rows; //nbr rows of map

    /* variables in file .cub */
    char *no;
    char *so;
    char *we;
    char *ea;
    char *s;
    char *c;
    char *f;

    int max_length; // long line in map 
    int last_line; // indice of the last line in map 
    int found_map; 
    int nbr_variables;  // nbr of variables in .cub file 
    int nbr_lines; // nbr lines of map 

    /* array-2d map  */
    char **map;
    t_list *head;

    double fov ; //field of View angle 
    //number of rays depends of how many  columns i have in my map 
    int num_rays;
    int wall_strip_width ;
    Ray *rays;




}Config;

typedef struct player{

    double x;
    double y;

    int player_north;
    int player_south;
    int player_east;
    int player_west;
    
    int player_found; 
    
    int turnDirection;
    int walkDirection;
    double rotationAngle;
    double moveSpeed;
    double rotationSpeed;
    double radius;

} Player;

