//the function strchr() searches the occurence of a specified character in the given string and returns a pointer to it .
//char *strchr(const char *str, int ch)
//str :string in which the character is searched.
//ch : the character that is searched in the string str.
//return value : it returns the pointer to the first occurence of the character in the given string, which means that if we display the string value of the pointer then it should display the part of the input string starting from the first occurence of the specifid character.

//The C library function char *strchr(const char *str, int c) searches for the first occurence of the character c (an unsigned char) in the string pointed to by the argument str.
//str : this is the C string to be scanned.
//c : this is the character to be searched in str.
//return value: this returns a pointer to the first occurence of the character c in the string str, or NULL if the character is not found.

//#include <string.h>
//char *strchr(const char *string, int c);
//the strchr() function finds the first occurence of a character in a string. the character c can be the null character(\0); the ending null character of string is included in the search.
//the strchr() function operates on null-ended strings. The string arguments to the function should contain a null character(\0) that marks the end of the string.
//return value: the strchr() function returns a pointer to the first occurence of c that is converted to a character in string. The function returns NULL if the specified character is not found.

//char *strchr(const char *string, int searchechar)
//cette fonction recherche la premiere occurence du caractere passe en second parametre dans la chaine de caracters specifiee via le premier parametre.
//la fonction strchr et tres proche de la fonction strrchr. la difference reside dans le fait que strchr renvoi la position de la premiere occurence du caractere recherche alors que strrchr renvoie la derniere occurence(recherhe par la droite: r signifiant right)
//string : la chaine de caracteres dans laquelle effectuer la recherche
//searchedChar :le caractere recherche.
//valeur de retour : soit le caractere recherhe est present dans la chaine et, dans ce cas, un pointeur sur la premiere occurence du caractere vous sera retourne.soit le caractere n'est pas present dans la chaine et dans ce cas, le pointeur NULL vous sera renvoye.

//what is the actual difference between memchr() and strchr(), besides the extra parameter?
//strchr stops when it hits a null character but memchr does not; this is why the strchr does not need a length parameter but the memchr does.
//functionally there is no difference in that they both scan an array/pointer for a provided value. the memchr version just takes an extra parameter because it needs to know the length of the provided pointer. The strchr version can avoid this because it can use strlen to calculate the length of the string.
//strchr expects that the first parameter is null-terminated, and hence doesn't require a length parameter.
//memchr works similary but doesn't expect that the memory block is null-terminated, so you may be searching for \0 charcater successfully
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strchr(const char *str , int c)
{
	if (str == NULL)
		return NULL;
	if (c == 0)
		return (char *)(str + strlen(str));
	int i = 0;

	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (char *)(str + i);
		i++;
	}
	return NULL;
}
int main()
{
	printf("1------------------------------------------------\n");

	const char str[] = "This is just a String";

	const char ch = 'u';

	char *p;

	p = ft_strchr(str,ch);

	printf("String starting from %c is |%s|\n",ch,p);//String starting from u is |ust a String|

	printf("2-------------------------------------------------\n");

	const char *source = "The C language";
	char *destination;
	char *pointer;

	int length = strlen(source);

	//we clone the initial string
	destination = (char *)malloc(sizeof(char) * (length + 1));
	strcpy(destination,source);

	//replace all 'a' characters with 'A'
	while(pointer = ft_strchr(destination, 'a'))
		*pointer = 'A';

	//display the result
	printf("result : |%s|\n",destination);//|The C lAnguAge|

	//release dynamically allocated memory
	free(destination);

	printf("3-------------------------------------------------------\n");

	printf("|%s|",ft_strchr("hi",'\0'));//||
}
