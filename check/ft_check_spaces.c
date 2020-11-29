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
            if (g_c.map[j][i] == ' ')
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
       if ( g_c.map[j][i + 1] == '0')
       {
           
            printf("j = %d i = %d\n",j,i);
            ft_err("space not closed");
       }
   }else if ( i ==  g_c.ml - 1)
   {
       if (g_c.map[j][i - 1] == '0')
       {
           printf("j = %d i = %d\n",j,i);
           ft_err("Space not closed");
       }
   }else 
   {
       if (g_c.map[j][i + 1] == '0' || g_c.map[j][i-1] == '0')
        {
            printf("j = %d i = %d\n",j,i);
           ft_err("Space not closed");
        }
   }
   if ( j == 0)
   {
       if (g_c.map[j+1][i] == '0')
       {
           printf("j = %d i = %d\n",j,i);
           ft_err("Space not closed");
       }
   }else if ( j == g_c.nbrl - 1)
   {
         if (g_c.map[j-1][i] == '0')
       {
           printf("j = %d i = %d\n",j,i);
            ft_err("Space not closed");
       }
   }else
   {
       if (g_c.map[j + 1][i] == '0' || g_c.map[j - 1][i] == '0')
        {
            printf("j = %d i = %d\n",j,i);
           ft_err("Space not closed");
        }
   }
  
   
   
}