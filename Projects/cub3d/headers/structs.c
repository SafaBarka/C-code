//image == char pointer
//pixel = 4 chars

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
}           t_data;



typedef struct Player{ //my player is a circle

    float x;
    float y;
    float radius;
    int turnDirection; //-1 for left +1 for right
    int walkDirection; //-1 for back =1 for front
    float rotationAngle;
    float moveSpeed;
    float rotationSpeed;
    
}   Player;