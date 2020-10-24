

typedef struct s_list {
   char *line;
   struct s_list* next;
}  t_list;

typedef struct config{
    int cpt ; // must be 8 at the end , number of variables in the file "R","NO","WE"....

    int r_width;
    int r_height;
    int nbr_columns;
    int nbr_rows;

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