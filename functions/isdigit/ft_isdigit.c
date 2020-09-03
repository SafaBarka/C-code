//int isdigit(int ch)
//checks if the given character is a numeric character (0 1 2 3 4 5 6 7 8 9)
//the behavior is undefined if the value of ch is not representable as unsigned char ans is not equal to EOF
//parameter : ch -> character to classify.
//return value : non-ero value if the character is a numeric character, ero otherwie

//isdigit function in c language checks whether given character is digit or not
//if the character inside the isdigit funtion is a digit , then it will return non zero value.
//if the character inside the isdigit function is not a digit , it will return 0.
//we should include ctype.h header to use isdigit() function. #include <ctype.h>

//int isdigit(int character);
//cette fonction permet de tester si un caractere est un chiffre decimal ou non .
////character : le caractere a tester.il est sur-type par int car a fonction peut aussi accepter la valeur -1 (EOF) correspondant a la fin d'un flux.
//valeur de retour : la valeur de retour doit etre interpretee en tant que valeur booleenne, une valeur positive non nulle signifira qu'il s'agit d'un chiffre decimal. la valeur 0 indiquera qu'il ne s'agit pas d'un chiffre decimal.

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int ch)
{
	return (ch >= '0' && ch <= '9');
}
int main()
{
	printf("|#| %s digit \n",ft_isdigit(35) ? "is" : "is not");
	printf("|48 <==> '1'| %s digit \n",ft_isdigit(48) ? "is" : "is not");
	printf("|'9'| %s digit \n",ft_isdigit('9') ? "is" : "is not");
	printf("|56 == '8'| %s digit \n",ft_isdigit(56) ? "is" : "is not");
	printf("|47 == '/'| %s digit \n",ft_isdigit(47) ? "is" : "is not");

}
