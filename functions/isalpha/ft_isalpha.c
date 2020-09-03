// isalpha is a funtion in  C which can be used to check if the passed character is an alphabet or not. it returns a non-ero value if it's an alphabet else it returns 0.For example , it returns non-zero values for 'a' to 'z' and 'A' to 'Z' and eroes for other characters.

//#include <ctype.h>
//int isalpha(int character) cette fonction permet de tester si un caractere est alphabetique ou non . un caractere sera considere comme alphabetique s'il est de lettres miniscule ou de lettres majuscules .Rappel : les fonctions de cette librairie ne traitent que les caracteres purs ASCII. les lettres accentuees ne seront donc pas considerees comme des caracteres alpha-numeriques.
//parameters: 
//character : le caractere a tester.
//valeur de retour : la valeur de retour doit etre interpretee en tant que valeur booleene . une valeur positive non-nulle signifira qu'il s'agit bien d'un caractere alphabetique . la valeur 0 indiquera qu'il ne s'agit pas d'un caractere alphabetique.

//int isalpha(int c);
//c is considered to be alphabetic if either islower(c) is true or issuper(c) is true.
//the isalpha function returns a non zero value if c is alphabetic and returns zero if c is not alphabetic.

#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int main(){
	printf("'2' is alpha ? :%d\n",ft_isalpha('2'));
	printf("'a' is alpha ? :%d\n",ft_isalpha('a'));
	printf("'Z' is alpha ? :%d\n",ft_isalpha('Z'));
	printf("'.' is alpha ? :%d\n",ft_isalpha('.'));

	printf("66('B') is alpha ? :%d\n",ft_isalpha(66));
	printf("117('u') is alpha ? :%d\n",ft_isalpha(117));
	printf("123('{') is alpha ? :%d\n",ft_isalpha(123));

}
