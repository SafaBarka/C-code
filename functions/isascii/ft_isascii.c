//#include <ctype.h>
//int isascii(int c);
//the isascii() function shall test whether c is a 7 bit US-ASCII character code.
//The isascii function is defined on all integer values.
//return value : The isascii() function shall return non-zero if c is a 7-bit US-ASCII character set ; otherwise, it shall return 0.

#include <ctype.h>
#include <stdio.h>

int main()
{

	printf("|14 == (SHIFT OUT)| %s ascii\n",isascii(14)? "is" : "is not");
	printf("|'a'| %s ascii\n",isascii('a')? "is" : "is not");
	printf("|127 == (DEL)| %s ascii\n",isascii(127)? "is" : "is not");
	printf("|128| %s ascii\n",isascii(128)? "is" : "is not");
	printf("|'W'| %s ascii\n",isascii('W')? "is" : "is not");
	printf("|-1| %s ascii\n",isascii(-1)? "is" : "is not");
	printf("|0| %s ascii\n",isascii(0)? "is" : "is not");

}
