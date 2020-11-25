#include "../cub3d.h"

int ft_trim_start(char *line)
{
    int i;

    i = 0;
    while (line[i] && line[i] == ' ')
        i++;
    if (line[i] == ' ')
        return i;
    return 0;
}

int ft_trim_end(char *line)
{
    int i;

    i = ft_strlen(line) -1 ;
    while (line[i] && line[i] == ' ')
        i--;
    if(line[i] == ' ')
        return i;
    return 0;
}

char *ft_strd(char *line)
{
    int i;
    int j;
    char *new;
    int k;

    k = 0;
    i = ft_trim_start(line);
    j = ft_trim_end(line);

    if ( i == 0 && j == 0)
        return line;
    printf("i = %d\nj = %d\n",i,j);
    while (i <= j)
    {
        new[k] = line[i];
        k++;
        i++;
    }

    
    return new;
}