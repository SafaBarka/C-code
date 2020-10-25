

typedef struct s_list {
   char *line;
   struct s_list* next;
}  t_list;


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


typedef struct config{
    int cpt ; // must be 8 at the end , number of variables in the file "R","NO","WE"....

    int r_width;
    int r_height;
    int nbr_columns;
    int nbr_rows;
    int TILE_SIZE_width;
    int TILE_SIZE_height;
    char *no;
    char *so;
    char *we;
    char *ea;
    char *s;
    char *c;
    char *f;
    int len_leng_line;
    int indice_last_line;
    t_list *head;
    

}Config;