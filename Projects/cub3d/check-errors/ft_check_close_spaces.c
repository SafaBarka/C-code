#include "../cub3d.h"

void ft_check_close_spaces()
{
    int i ;
    int j ;

    j = 0 ;
    i = 0;
    while ( j < config.nbr_lines)
    {
        while ( i <  config.max_length)
        {
            if (config.map[j][i] == ' ')
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
       if ( config.map[j][i + 1] == '0')
       {
            printf("j = %d i = %d\n",j,i);
            ft_check_exit("space not closed");
       }
   }else if ( i ==  config.max_length - 1)
   {
       if (config.map[j][i - 1] == '0')
       {
           printf("j = %d i = %d\n",j,i);
           ft_check_exit("Space not closed");
       }
   }else 
   {
       if (config.map[j][i + 1] == '0' || config.map[j][i-1] == '0')
        {
            printf("j = %d i = %d\n",j,i);
           ft_check_exit("Space not closed");
        }
   }
   if ( j == 0)
   {
       if (config.map[j+1][i] == '0')
       {
           printf("j = %d i = %d\n",j,i);
           ft_check_exit("Space not closed");
       }
   }else if ( j == config.nbr_lines - 1)
   {
         if (config.map[j-1][i] == '0')
       {
           printf("j = %d i = %d\n",j,i);
            ft_check_exit("Space not closed");
       }
   }else
   {
       if (config.map[j + 1][i] == '0' || config.map[j -1 ][i] == '0')
        {
            printf("j = %d i = %d\n",j,i);
           ft_check_exit("Space not closed");
        }
   }
  
   
  
}
