#include "../cub3d.h"

char *ft_realloc(char *line, int max_length)
{
 
    char *newLine = malloc(sizeof(char) * (max_length + 1));
    int i = 0;
   
    int len = ft_strlen(line) ;
   
        while(i < len)
        {
           
            newLine[i] = line[i] ;
            i++;
        }
       
        while(i < max_length)
        {
            
            newLine[i] = ' ' ;
            i++;
        }
    
        newLine[i] = '\0';
        
    return newLine;
}