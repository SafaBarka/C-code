
#include "../../headers/functions.h"

int ft_set_configuration(char *line)
{
    char **str = NULL;

    if (line[0] == '\0' && config.foundMap == 1)
    {
        printf("line break between elements  of map\n");
        return 0;
    } else if (line[0] == '\0')
        return 1;
    if (config.cpt != 8)
    {
        str = ft_split(line,' ');
        //1------------------------------------------
        if (str[0] && ft_strncmp(str[0] ,"R", 2) == 0)
        {
         
            if(config.r_width != -1 && config.r_height != -1)
            {
                 printf("defining variable  |%s| twice in the file \n",str[0]);
                return 0;
            }
            if (ft_check_nbr_splits(str) != 3)
            {
                printf("number of parameters are  != 3 (R) \n");
                return 0;
            }
            if (config.r_width == -1 && config.r_height == -1 )
            {
                config.cpt++;
                return ft_set_configuration_resolution(str[1], str[2]);
            }
            
        }
        //2------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "NO", 2) == 0)
        {
         
            if (config.no != NULL)
            {
                 printf("defining variable  |%s| twice in the file \n",str[0]);
                return 0;
            }
            if (ft_check_nbr_splits(str) != 2)
            {
                  printf("number of parameters are  != 2  (NO)\n");
                return 0;
            }
            if (config.no == NULL)
            {
                config.cpt++;
                config.no = ""; // to change later 
            }
        }

        //3------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "SO",2) == 0)
        {
           
            if(config.so != NULL)
            {
                 printf("defining variable  |%s| twice in the file \n",str[0]);
                 return 0;
            }
            if (ft_check_nbr_splits(str) != 2)
            {
                  printf("number of parameters are  != 2  (SO)\n");
                return 0;
            }
            if (config.so == NULL)
            {
                config.cpt++;
                config.so = ""; // to change later
            }
        }
        //4------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "WE",2) == 0)
        {
               
                if(config.we != NULL)
                {
                         printf("defining variable  |%s| twice in the file \n",str[0]);
                         return 0;
                }
                if (ft_check_nbr_splits(str) != 2)
                {
                      printf("number of parameters are  != 2 (WE)\n");
                    return 0;
                 }
                 if (config.we == NULL)
                 {
                         config.cpt++;
                         config.we=""; // to change later
                  }
        }
        //5------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "EA",2) == 0)
        {
                
                if(config.ea != NULL)
                {
                    printf("defining variable  |%s| twice in the file \n",str[0]);
                    return 0;
                }
                if (ft_check_nbr_splits(str) != 2)
                {
                      printf("number of parameters are  != 2 (EA)\n");
                    return 0;
                 }
                 if (config.ea == NULL)
                 {
                         config.cpt++;
                         config.ea=""; // to change later
                 }
        }
        //6--------------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "S",2) == 0)
        {
                
                if(config.s != NULL)
                {
                        printf("defining variable  |%s| twice in the file \n",str[0]);
                        return 0;
                }
                if (ft_check_nbr_splits(str) != 2)
                {
                      printf("number of parameters are  != 2 (S)\n");
                    return 0;
                 }
                 if (config.s == NULL)
                 {
                         config.cpt++;
                         config.s=""; // to change later
                  }
        }
        //7--------------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "F",2) == 0)
        {
               
                if(config.f != NULL)
                {
                      printf("defining variable  |%s| twice in the file \n",str[0]);
                      return 0;   
                }
                if (ft_check_nbr_splits(str) != 2)
                {
                      printf("number of parameters are  != 2 (F)\n");
                    return 0;
                 }
                 if (config.f == NULL)
                 {
                         config.cpt++;
                         config.f=""; // to change later
                  }
        }
        //8--------------------------------------------------
        else if (str[0] && ft_strncmp(str[0] , "C",2) == 0)
        {
       

                if(config.c != NULL)
                {
                    printf("defining variable  |%s| twice in the file \n",str[0]);
                    return 0;
                }
                if (ft_check_nbr_splits(str) != 2)
                {
                    printf("number of parameters are  != 2 (C)\n");
                    return 0;
                 }
                 if (config.c == NULL)
                 {
                         config.cpt++;
                         config.c=""; // to change later
                }
        }
        //--------------------------------------------------------
        else if (ft_strncmp(str[0],"R",2) != 0 && 
                ft_strncmp(str[0],"S",2) != 0 && 
                ft_strncmp(str[0],"F",2)!= 0  && 
                ft_strncmp(str[0],"C",2)!= 0  &&
                ft_strncmp(str[0],"NO",2)!= 0 && 
                ft_strncmp(str[0],"SO",2) != 0 && 
                ft_strncmp(str[0],"WE",2) != 0 && 
                ft_strncmp(str[0],"EA",2) != 0 
                )
        {
        
            printf(" |%s| : nom de variable is not valid!\n",str[0]);
            return 0;
         }

    }
    else if  (config.cpt == 8)
    {
        config.cptLineMap++;
        config.foundMap = 1;
        if (config.head == NULL)
        {
            if (!ft_check_first_last_line(line))
                return 0;
        }
        else if (config.indice_last_line == 1)
        {
            if (!ft_check_first_last_line(line))
                return 0;
        }
        else
        {
            if (!ft_check_middle_line(line))
                return 0;
        }
        if(ft_store_map_list(line) ==  0)
            return 0;
        
    }
    
    return 1;
}