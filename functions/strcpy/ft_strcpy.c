//char *strcpy(char *destnation, const char *source); //avant c99
//char *strcpy(char *restrict destination, const char *restrict source); // a partir de c99
//cette fonction permet de copier le contenu d'une chaine de caracteres dans une autre. Bien entendu , la chaine de aracteres devant recevoir le contenu de lautre doit eter allouee de maniere a etre suffisament grande pour contenir tout le texte.
//En language C, les chaines de caracteres sont qualifiees d'AZT : A Zero Terminal. Cela signifie qu'une chaine de caracteres se termine forcement par un code ASCII nul(pouvant aussi etre represente par \0). la fonction strcpy copiera chaque caractere, un a un , jusqu'a  atteindere ce fameux code ASCII nul . Au passage , il sera lui aussi copie.
//destination : permet de specifier l'addresse de la chaine de caractere devant recevoir le contenu de lautre. vous devez avoir pre-alloue ce bloc de memoire avec la taille suffisante pour recevoir la chaine a copier. cette allocation pourra etre realiser via la fonction malloc.
//source: permet de definir l'addresse de la chaine de caractere a dupliquer.
//valeur de retour : la fonction renvoie l'addresse de la chaine dupliquee.

//char *strcpy(char *dest, const char *src);			until (c99)
//char *strcpy(char *restrict dest, const char *restrict src);  since (c99)
//errno_t strcpy_s(char *restrict dest, resize_t destz, const char *restrict src) since(c11).

//1- copies the null terminated byte string pointed to by src, including the null terminator, to the character array whose first element is pointed to by dest.
//the behavior is undefined if the dest array is not large enough.
//the behavior is undefined if the strings overlap.
//the behavior is undefined if either dest is not a pointer to a characer array.
//the behavior is undefined if src is not a pointer to a null-terminated byte string.
//dest : pointer to teh character array to write to.
//sr : pointer to the null-terminated byte string to copy from.
//Return value : returns a copy of dest

//the C Strcpy function is one of the String Functions, which is helpful to copy the user- specified string or content(a group of characters) from one string to another.

//the C library function strcpy copies the string pointed to , by src to dest.
//dest :this is the pointer to the destination array where the content is to be copied.
//src : this is the string to be copied .
//return value : this returns a pointer to the destination string dest.

//difference between strpy and memcpy:
//strcpy stops when it encounters a NULL('\0') character,memcpy does not.you do not see the effect when using %s in printf because %s also stops at NULL.

//strcpy terminates when the source string's null  terminator is found.memcpy requires a sie parameter be passed.
//strcpy copies character from source to destination one by one until it find NULL '\0' character in the source.
//where as memcpy copies data (not haracter) from source to destination of given size n , irrespective of data in source.
//memcpy should be used if you know well that source contain other than character. for encrypted data or binary data, memcpy is ideal way to go .

//the main difference is that memcpy() always copies teh exact number of bytes you specify; strcpy(), on the other hand, wll copy until it reads NULL (aka 0) byte, and then stop after that .
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void print(char *str,int n);
int main(){

	printf("1----------------------------------------------\n");

	char *src ="hello world!";
	//src[0]='M'; // this would be undefined behavior (runtime-> segfault)
	
	char dst[strlen(src) + 1]; //+1 to accomodate for the null terminator

	strcpy(dst, src);

	dst[0]='M'; //OK

	printf("src = %s\ndst = %s\n",src,dst);

	printf("2-------------------------------------------------\n");

	char s[40];

	char dest[100];

	memset(dest, '\0',sizeof(dest));

	strcpy(s, "THis is me");

	strcpy(dest,s);

	printf("Final copied string : %s\n",dest);

	printf("3---------------------------------------------------\n");
	//difference between mempy and strcpy
	
	char str[5]={'s','a','\0','c','h'};

	char membuff[5];

	char strbuff[5];

	memset(membuff,0,5);

	memset(strbuff, 0,5);

	strcpy(strbuff,str);

	memcpy(membuff,str,5);

	printf("print strbuff :\n");
	print(strbuff,5);

	printf("print membuff :\n");
	print(membuff,5);

}

void print(char *str,int n)
{
	for(int i = 0; i< n;i++)
		printf("|%c| ",str[i]);
	printf("\n");
}

