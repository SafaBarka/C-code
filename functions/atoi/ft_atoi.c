// In the C programming Language , the atoi function converts a string to an integer.
// the atoi function skips all white-space characters at the begening of the string, converts the subsequent characters as part of the number, and then stops when it encounters the first character that isn't a number
// the syntax : int atoi(const char *nptr)
//nptr : a pointer to a string to convert to an integer.
//returns : the atoi function returns the integer representation of a string. the atoi function skips all white-space characters at the begining of the string, converts the subsequent characters as part of the number , and then stops when it encounters the first character that isn't a number.
//the requires header for the atoi function is #include <stdlib.h>

//THe C library function int atoi(const char *str) converts the string argument str to an integer(type int)
//str : this is the string representation of an integral number
//the function returns the converted integral number as an int value , if no valid conversion could be performed , it returns 0


//entete a inclure : #include <stdlib.h>
//int atoi(const char *theString);
//cette fnction permet de transformer une chaine de caracteres, representant une valeur entiere, en une valeur numerique de type int. le terme d'atoi est un acronyme signifiant :ASCII to integer.
//la fonction atoi retourne la valeur 0 si la chaine de caracteres ne contient pas une representation de valeur numerique. Du coup , il n'est pas possible de distinguer la chaine "0" d'une chaine ne contenant pas un nombre entier.si vous avez cette difficulte , veuillez preferer l'utulisation de la fonction strtol qui permet bien de ditinguer les deux cas.
//the String : ce parametre contient la chaine de caracteres a convertir en une donne de type int.
//valeur de retour : si la chaine a convertir ne contient pas une donnee numerique entiere, la valeur 0 vous sera retournee. sinon , une valeur de type int equivalente a la chaine passee en parametre vous sera retournee.

//the function atoi is a C standard library function that converts strings to numbers (more specifically, integeres)
//parameters : const char *str
//the function receives one parameter , a string. Note that the string is received as a constant- the function atoi will never alter a received string; only returns its converted integer value
//when working with strings in C , remember-strings are no more than arrays of ASCII- encoded characters ending with a terminating null byte (\0)
//return value : int
//if the received string can be successfully converted to a number, the function returns the converted integer. Otherwise, it returns 0

//what exactly is a string that can be successfully converted to a number?
// In general , strings that can successfully be converted to numbers strictly include the following:
// - strings consisting exclusively of ASCII digits '0123456789'
// - strings consisting exclusively of ASII digits and starting with the character '+'
// - strings consisiting exclusively of ASCII digits and starting with the character '-'
// however , this does not mean that you will receive 0 for any other kind of string passed  to atoi .
// the function atoi works incrementally, in other words, it builds numbers represented by strings one-by-one, iterating over characters from left to right. Only upon encounterin a non-ASCII digit(assuming it is not a '+' or '-' at  the begening of the string),does the function break.
//after breaking , atoi returns one of two possible values- if the function is at the begening of the string and has not converted any values, it returns 0. Otherwise, it returns the current number it has built thus far.

//in briefer summation, a more proper description of atoi's return value is the first valid number that can be converted from the received string, or 0 .

//ATOI-when ?
//a common use case for the function atoi is the handling of integer parameters received as command-line arguments.Command-line arguments are received in string format; hence , in cases where you nedd to use command-line arguments as numbers, you must first get the integer value they represent.

//watch out - keep in mind that atoi will return 0 both for strings with no valid number conversions, and for the actual string "0" (or a string of '0's).To account for this behavior, we must implement some error handling.In cases where atoi returns 0 , we will double-check that we didi not convert a string starting with the '0' character.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	printf("1------------------------------------------\n");
	int val;

	char str[20];

	strcpy(str,"93948495");
	val = atoi(str);

	printf("string value = |%s|, Int value = |%d|\n",str,val);
	
	printf("2------------------------------------------\n");

	strcpy(str, "helloworld!");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);
	
	printf("3------------------------------------------\n");

	strcpy(str, " 123helloworld!");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);

	printf("4------------------------------------------\n");
	
	strcpy(str, "++++123");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);


	printf("5------------------------------------------\n");
	
	strcpy(str, "+123");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);

	printf("6------------------------------------------\n");
	
	strcpy(str, "---------123");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);

	printf("7------------------------------------------\n");
	
	strcpy(str, "-123");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);

	printf("8------------------------------------------\n");
	
	strcpy(str, "+-123");
	val = atoi(str);
	
	printf("string value = |%s|, int value = |%d|\n",str,val);

	printf("9------------------------------------------\n");

	if (argc >= 3)
	{
		//get the integer value of the first number using atoi
		int num1 = atoi(argv[1]);
		//get the integer value of the second number using atoi
		int num2 = atoi(argv[2]);
		int s;

		//check  that you received valid numbers before summing
		if(num1 == 0 && *argv[1] != '0')	
		{
			printf("the first argument is not a valid number!\n");
			return (EXIT_FAILURE);
		}
		if(num2 == 0 && *argv[2] != '0')
		{
			printf("the second argument is not a valid number!\n");
			return (EXIT_FAILURE);
		}

		//sum the two numbers
		s = num1 + num2 ;

		printf("%d + %d = %d\n",num1,num2,s);
	}
	printf("10------------------------------------------\n");

	if (argc == 1)
	{
		printf("exit\n");
		exit(EXIT_SUCCESS);
	}
	printf("argc = |%d| argv = |%s|\n",argc,*argv);

	argc--; argv++;

	printf("argc = |%d| argv = |%s|\n",argc,*argv);

	int sum = 0;

	while(argc!=0)
	{
		sum +=atoi(*argv++);
		argc--;	
	}

	//on affiche le resultat
	
	printf("la somme des valeurs saisies est de %d. \n",sum);

	printf("11----------------------------------------------\n");
	
	return EXIT_SUCCESS;

}
