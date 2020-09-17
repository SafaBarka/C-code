//The C strrchr function is a string function, which returns a pointer to the last occurence of a charcetr in a given string.
//void *strrchr(const char *str, int chr_to_look);
//str :a valid string
//chr_to_look : character value that you want to look inside str
//the strrchr function used to find the last occurence of a character whithin the user specified string.

//#include <string.h>
//char *strrchr(const char *string, int searchedChar);
//cette fnction recherche la derniere occurrence du caractere passe en second parametre dan la chaine de caracteres specifiee via le premier parametre.
//string : la chaine de caracteres dan laquelle effectuer la recherche
//searchedChar : le caractere recherche
//valeur de retour :soit le caractere recherche est present dans la chaine et , dans cee cas , un pointeur sur la derniere occurrence du caractere vous sera retourne. soit le caractere n'est pas present dan la chaine et dans ce cas , le pointeur NULL vous sera renvoye

//strrchr() is string manipulation function of C programming that is used for a search int the string. this function is defined under string header file string.h
//#include <string.h>
//char *strrchr(const char *str, int ch);
//str = string that needs to be scanned
//ch = character that needs to be searched in str.
//this standard library function searches for the character ch in the string str and locates its last occurence. if the character is found , a pointer to that character is returned else a NULL pointer is returned.

//the strchr() ans strrchr() functions return a pointer to the matched character or NULL if the character is not found.the terminating null byte is considered part of the string, so that if c is specified as \0, these functions return a pointer to the terminator.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
	size_t len = strlen((char *)s);
	if (!s)
		return NULL;
	while(len--)
	{
		if (s[len] == (unsigned char )c)
			return (char *)(s+ len);
	}

	if ((unsigned char)c == '\0')
		return (char *)(s +strlen((char *)s));
	return NULL;

}
int main(){
	printf("1-----------------------------------------------\n");
	char str[] ="hello world";
	char *ch;

	ch = ft_strrchr(str,'l');

	printf("|%s|\n",ch);//|ld|
	
	printf("2--------------------------------------------------\n");

	//le nom du fichier d'origine
	const char * originalFilename = "folder/image.jpg";

	//on prepare le nom du fichier de destination
	size_t size = strlen(originalFilename) + 1;
	char *destinationFilename = (char *)malloc(size);
	strcpy(destinationFilename,originalFilename);

	//et on y remplace l'extension du fichier par l'extension .png
	char *lastDotPos =ft_strrchr(destinationFilename, '.');
	strcpy(lastDotPos,".png");

	//on affiche les deux noom de fichiers
	printf("|%s|\n",originalFilename);//|folder/image.jpg|
	printf("|%s|\n",destinationFilename);//|folder/image.png|
}
