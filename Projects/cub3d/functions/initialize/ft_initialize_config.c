
#include "../../headers/functions.h"

void ft_initialize_config()
{
    config.cpt = 0;
    config.r_width = -1;
    config.r_height = -1;
    config.nbr_columns = 0;
    config.nbr_rows = 0;
    config.no = NULL;
    config.so =NULL;
    config.we = NULL;
    config.ea = NULL;
    config.f = NULL;
    config.c = NULL;
    config.s = NULL;
    config.len_leng_line = 0;
    config.indice_last_line = 0; // to delete later
    config.head = NULL;

}