//function name :ft_substr
//prototype	: char *ft_substr(char const *s, unsigned nt start, size_t len);
//parameteres	:
//s -> the string from which to create the substring
//start -> the start index of the substring int the string 's'
//len -> the maximum length of the substring
//return value : the substring. NUll IF THE ALLOCATION FAILS.
//external functions : malloc
//description : allocates (with malloc()) and returns a substring from the string 's'.the substring begin at index 'start' and is of maximum size 'len'

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub ;
	
	if (s == NULL)
		return NULL;
	if (start >= strlen((char *)s))
		len = 0;
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return NULL;

	int i ;
	for (i = 0 ; i < len ; i++){
		if (s[start] == '\0')
			return sub;
		printf("i = %d\n",i);
		sub[i] = s[start];
		start++;
	}
	sub[i]= '\0';
	return sub;

}
int main()
{
	char const *s ="hello world"; 

        printf("1---------------------------------------------\n");
	
	printf("|%s|\n",ft_substr(s,0,4));//|hell|

	printf("2---------------------------------------------\n");

	printf("|%s|\n",ft_substr(s,2,0));//||
	
	printf("3---------------------------------------------\n");

	printf("|%s|\n",ft_substr(s,4,2));//|o |
	
	printf("4---------------------------------------------\n");

	printf("|%s|\n",ft_substr(NULL,0,2));//|null|
 	
	printf("5---------------------------------------------\n");

	char *sub = ft_substr(s,10,3);

	printf("|%s|\n",sub);

	printf("sub[0] = |%c| sub[1] = |%c| sub[2] =|%c|\n",sub[0],sub[1],sub[2]);

}
