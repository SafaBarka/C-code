//The C library function char *str(const char *haystack, const char *needle) function finds the first occurence of the substring needle in the string haystack. the terminating '\0' characters are not compared.
//char *strstr(const char *haystack, const char *needle);
//haystack : this is the main C string to be scanned
//needle : THis is the small string to be searched with-in haystack string.
//return value : THis function returns a pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle , or a null pointer if the sequence is not present in haystack.

//the strstr() function searches the given string in the specified main string and returns the pointer to the first occurence of the given string.
//needle: the string to be searched
//haystack : the string that we need to search in strinh haystack
//return value : this function returns the pointer to the first occurence of the given string, which means if we print the return value of this function, it should display the part of the main string, starting fromm the given string till the end of the main string .

//strstr() is a predefined function used for string handling. 
//string.h is the header file required for string functions.
//This function takes two strings s1 and s2 as an argument and finds the first occurence of the substring s2 in the string s1. The process of matching does not include the terminating null character('\0'). but function stops there
//return value : this function returns a pointer points to the first character of the found s2 in s1 otherwise a null pointer if s2 is not present in s1. if s2 points to an empty strint s1 is returned.

//#include <string.h>
//char *strstr(char * fullString, char *substring);
//la fonction strstr recherche la premiere occurence d'une sous-chaine (parametre substring) dans la chaine de caracteres principale(parametre fullString).
//fullString: la chaine de caracteres dans laquelle effectuer la recherche.
//substring : la sous-chaine a rechercher dans la chaine principale.
//valeur de retour : si la sous-chaine est trouvee dans la chaine principale, la fontion renvoi un pointeur visant sa premiere occurence. Dans le cas contraire, un pointeur nul (NULL) vous sera renvoye.

#include <string.h>
#include <stdio.h>

int main(){

	const char haystack[30] ="hello world";

	const char needle[] ="\0";

	char *ret;

	ret = strstr(haystack, needle);
	
	//needle = " wo"		->	return : " world"
	//needle = " wojj"		->	return :NULL
	//needle = NULL 		->	return segfault
	//needle = NULL / haystack =NULL ->	return segfault
	//haystack = NULL 		->	return segfault.
	//needle = ""(empty string)	->	return haystack
	printf("The substring is : %s\n",ret);

	return 0;
}
