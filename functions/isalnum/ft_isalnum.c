//isalnum() funtion in C programming language checks whether the given character is alphanumeric or not .isalnum()function defined in ctype.h header file.
//Alphanumeric : a character that is either a letter or a number.
//int isalnum(int x);

//the isalphanum function returns a non-ero integer if an argument(character) passed to the function is an alphanumeric (alphabet and number) character.
//function prototype : int isalnum(int argument)

//when a character is passed as an argument, corresponding ASCII value (integer) of the character is passed instead of that character itself.

//this function is defined in ctype.h header file.

//int isalnum(int character);
//cette fonction permet de tester si un caractere est alpha-numerique ou non . Un caractere sera considere comme alpha-numerique s'il est une lettre (minuscule ou majuscule) ou un chiffre. Rappel : les  fonctions de cette librairie ne traitent que les caracteres purs ASCII. les lettres accentuees ne seront donc pas considerees comme des caracteres alpha-numeriques.
//parametre: le caractere a tester.il est sur-type par int car la fonction peut aussi accepter la valeur -a (EOF) correspondant a la fin d'un flux.

//valeur de retouur : la valeur de retour doit etre interpretee en tant que valeur booleenne. une valeur positive non nulle signifira qu'il s'agit bien d'un caractere alpha-numerique.la valeur 0 indiquera qu'il ne s'agit pas d'un caractere alpha-numerique.
//#include <ctype.h>

//int isalnum(int c)
//checks whether c is either a decimal digit or an uppercase or lowercase letter.
//the result is true if either isalpha or isdigit would also return true .

#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}
int main(){

	printf("|40 == '('| %s alphanumeric\n",ft_isalnum(40)? "is" : "is not");
	printf("|48 == '0'| %s alphanumeric\n",ft_isalnum(48)? "is" : "is not");
	printf("|'3'| %s alphanumeric\n",ft_isalnum('3')? "is" : "is not");
	printf("|65 == 'A'| %s alphanumeric\n",ft_isalnum(65)? "is" : "is not");
	printf("|0== '/0'| %s alphanumeric\n",ft_isalnum(0)? "is" : "is not");

}

