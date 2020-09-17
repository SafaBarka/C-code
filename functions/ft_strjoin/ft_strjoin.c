//function name : ft_strjoin
//prototype : char *ft_strjoin(char const *s1, char const *s2)
//parameters :
//s1 : the prefix string
//s2 : the suffix string
//return value : the new string.NULL if the allocation fails
//external functs : malloc
//description : allocates with malloc and returns a new string which is the result of the concatenation of 's1' and 's2'.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join ;

	if (!s1 || !s2)
		return NULL;

	join =(char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) +1));

	if (!join)
		return NULL;
	int i = 0;
	int j = 0;
	while (s1[i])
	{
		join[i]=s1[i];
		i++;
	}
	while (s2[j])
	{
		join[i]=s2[j];
		i++;
		j++;
	}
	join[i] = '\0';

	return join;

}
int main()
{
	char const *s1 ="no";

	char const *s2="world";

	char *join = ft_strjoin(s1,s2);

	printf("%s\n",join);	
}
