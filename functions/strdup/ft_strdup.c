//the function strdup() is used to duplicate a string, it returns a pointer to null terminated byte string.
//char *strdup(const char *str)

//cette fnction permet de dupliquer une chaine de caracteres.
//la fonction strdup alloue une nouvelle zone de memoire via la fonction malloc afin d'y copier la chaine de caracteres initiale.il est donc imperatif de liberer cette zone memoire apres utilisation via la fonction free.
//En language C , les chaines de caracteres sont qualifiees d'AT : A Zero Terminal. Cela signifie qu'une chaie de caracteres se termine forcement par un code ASCII nul(pouvant aussi etre represente par \0). la fontion strdup copiera chaque caractere, un a un, jusqu'a atteindre ce fameux code ASCII nul . Au passage , il sera lui aussi copie.
// str : permet de definir l'addresse de la chaine de aracteres a dupliquer.
// retour value : s'il y'a suffisament de memoire pour produire la nouvelle chaine , la fonction renvoie l'adresse de la chaine duliquee. Dans le cas contraire , un pointeur nul vous sera retourne.

//strdup function in other words :
//1- it tries to allocate enought memory to hold the old string (plus a \0 character to mark the end of the string).
//2- if the allocation failed , returns NULL immediately.
//3-otherwise the allocation worked so we copy the old string to the new string and return the new address.

//strdup() does dynamic memory allocation for the character array including the end character \0 and returns the address of the heap memory .

//the most valuable thing it does is give you another string identical to the first, without requiring you to allocate memory (location and size) yourself, but you still need to free it .

//the strdup() function is shorthand for string duplicate, it takes in parameter as a string constant or a string literal and allocates just enough space for the string and writes the corresponding characters in the space allocated and finally returns the address of the allocated space to the calling routine.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *str){

	int n = strlen(str);

	char *copy = malloc(sizeof(char) * n);
	
	if (!copy)
		return NULL;
	else
	{
		copy[n] = '\0';
		while (n--)
			copy[n] = str[n];
	}
	return copy;
}

int main(){
	printf("1------------------------------------------------\n");
	char *str ="h"; //str = NULL-> segmentation fault

	char *result;

	result = ft_strdup(str);

	//str = "hello world"->return : "hello world"	
	//str = NULL -> return : segmentation fault
	
	printf("the string :|%s|\n",result);

	printf("2------------------------------------------------\n");

	const char *original ="YES";

	//on duplique la chaine de caracteres initiale.
	char *copy = ft_strdup(original);

	//On affiche la chaine .
	printf("%s\n",copy);

	//sans oublier de liberer l'espace memoire au finale.
	free(copy);

	return 0 ;
}
