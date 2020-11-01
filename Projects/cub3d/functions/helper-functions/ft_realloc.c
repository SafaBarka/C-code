#include "../../variables/cub3d.h"

char *ft_realloc(char *line, int nbr)
{
 
   char *newLine = malloc(sizeof(char) * nbr);
    int i = 0;
   
    int len = ft_strlen(line) ;
   
        while(i < len)
        {
           
            newLine[i] = line[i] ;
            i++;
        }
       
        while(i < nbr)
        {
            
            newLine[i] = ' ' ;
            i++;
        }
    
        newLine[i] = '\0';
        
    return newLine;
}