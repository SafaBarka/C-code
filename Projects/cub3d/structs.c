typedef struct s_data {
    void    *img;
    char    *addr;
    int     bpp;
    int     line_length;
    int     endian;
}           image_data;


typedef struct s_list {
   char *line;
   struct s_list* next;
}  t_list;

typedef struct error {
    char *message;
}   Error;

typedef struct ray{

    float rayAngle;
    int isRayFacingDown;
    int isRayFacingUp;
    int isRayFacingRight;
    int isRayFacingLeft;
    float xintercept;
    float yintercept;
    float xstep;
    float ystep;
    int foundHorzWallHit;
    float horzWallHitX;
    float horzWallHitY;
    int foundVertWallHit;
    float vertWallHitX;
    float vertWallHitY;
    float distance_horiz;
    float distance_vert;
    float distance;
    
}Ray;
typedef struct player{

    float x;
    float y;

    int player_north;
    int player_south;
    int player_east;
    int player_west;
    
    int player_found; 
    
    int turnDirection;
    int walkDirection;
    float rotationAngle;
    float moveSpeed;
    float rotationSpeed;
    float radius;

} Player;
typedef struct config
{

    void *mlx ;
    void *mlx_win;
    image_data  image;


    int width; 
    int height; 

    int tile_width;
    int tile_height;

    int columns;
    int rows; 

    char *no;
    char *so;
    char *we;
    char *ea;
    char *s;
    char *c;
    char *f;

    int max_length; 
    int last_line; 
    int found_map; 
    int nbr_variables;  
    int nbr_lines; 

  
    char **map;
    t_list *head;

    double fov ; //field of View angle 
    int num_rays;
    int wall_strip_width ;
 
    Ray *rays;  
    float mini_map_factor;
    Error erro;
    int tmp_width;
    int tmp_height;
    Player *player;

}Config;


