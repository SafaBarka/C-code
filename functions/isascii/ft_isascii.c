//#include <ctype.h>
//int isascii(int c);
//the isascii() function shall test whether c is a 7 bit US-ASCII character code.
//The isascii function is defined on all integer values.
//return value : The isascii() function shall return non-zero if c is a 7-bit US-ASCII character set ; otherwise, it shall return 0.

//ASCII is an acronym for American Standard Code for Information Interchange .
//it is a code that uses numbers to represent characters .Each letter is assigned a number between 0 ans 127 . A upper and lower case character are assigned different numbers.for example the character A is assigned the decimal number 65, while a is assigned decimal 97 .
//when is Ascii code used?
//when a computer sends data the keys you press or the text you send and receive is sent as a bunch of numbers.These numbers represent the characters you typed or generated.Because the range of standard ASCII is 0 to 127 it only requires 7 bits or 1 byte of data. for example to send the string cactus.io as ascii it would translate to 99 97 99 116 117 115 46 105 111.Microprocessors only understand bits and bytes.To it everrything is a sequence of bitsStandard Code for Information Interchange .
//it is a code that uses numbers to represent characters .Each letter is assigned a number between 0 ans 127 . A upper and lower case character are assigned different numbers.for example the character A is assigned the decimal number 65, while a is assigned decimal 97 .
//when is Ascii code used?
//when a computer sends data the keys you press or the text you send and receive is sent as a bunch of numbers.These numbers represent the characters you typed or generated.Because the range of standard ASCII is 0 to 127 it only requires 7 bits or 1 byte of data. for example to send the string cactus.io as ascii it would translate to 99 97 99 116 117 115 46 105 111.Microprocessors only understand bits and bytes.To it everrything is a sequence of bits.  
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
