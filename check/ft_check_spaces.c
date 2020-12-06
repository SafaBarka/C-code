#include "../cub3d.h"

void ft_check_spaces()
{
      int i ;
    int j ;

    j = 0 ;
    i = 0;
    while ( j < g_c.nbrl)
    {
    
        while ( i <  g_c.ml)
        {
            if (g_c.map[j][i] == '0')
               ft_check_space(j,i);
             i++;
        }
        j++;
        i = 0; 
    }
}
void ft_check_space(int j, int i)
{
    
    if ( i == 0)
    {
       if ( g_c.map[j][i + 1] == ' ')
       {
       printf("i = %d j = %d\n",i,j);
            ft_err("map not closed");
       }
    }
    else if ( i ==  g_c.ml - 1)
    {
       if (g_c.map[j][i - 1] == ' ')
       {
       printf("i = %d j = %d\n",i,j);
           ft_err("map not closed");
       }
    }
    else 
    {
       if (g_c.map[j][i + 1] == ' ' || g_c.map[j][i-1] == ' ')
       {
       printf("i = %d j = %d\n",i,j);
           ft_err("map not closed");
       }
    }
   if ( j == 0)
   {
       if (g_c.map[j+1][i] == ' ')
       {
           printf("i = %d j = %d\n",i,j);
           ft_err("map not closed");
       }
   }
   else if ( j == g_c.nbrl - 1)
   {
       if (g_c.map[j-1][i] == ' ')
        {
           printf("i = %d j = %d\n",i,j);
            ft_err("map not closed");
        }
   }
   else
   {
       if (g_c.map[j + 1][i] == ' ' || g_c.map[j - 1][i] == ' ')
        {
           printf("i = %d j = %d\n",i,j);
           ft_err("map not closed");
        }
   }
}