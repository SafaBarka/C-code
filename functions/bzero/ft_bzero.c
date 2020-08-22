//void bzero(void *s,size_t n)
//#include <string.h>
//the bzero() function erases the data in the (n)bytes of the memory starting starting at the location pointed by (s),by writing zeros (bytes containing '\0') to that area.

//return value : none.
//
//la fonction bzero() met a 0 (octets contenant '\0')les n premiers octets du bloc pointe par s.

//difference between '0' ,'\0',0,48 ?
//'0' referes to the character zero, which has an ASCII value of 48.
//characters types can be interpreted as numbers (48) or as ascii characters ('0').it makes no difference to the compiler; int the end they're all numbers.

//'\0' referes to  the null character(ASCII value 0),or a number of value 0, depending on how you interpret the data.as a character, it is a string terminator inc ;in other words, it marks the end of a string. it's a non printing value. as a number, it's zero. as a boolean it's false. to the compiler, it's zero, but its interpretation is up to you.

//'0' (48 in ascci) and '\0'(0 in ascii) cannot be used interchangeablyat all,because they are different values.48 is different from 0, and the character zero is different from the null character (string terminator).
//using a '\0' in a string where you meant '0' will terminate your string early.
//using 48 where you meat 0 will make your math all wrong.
//
#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n){
	while(n--)
		*((unsigned char *)s++) = '\0';
}
int main(){
	char s1[]="hello world!";
	char s11[]="hello world!";

	bzero(s1,4);
	ft_bzero(s11,4);

	printf("s1 = %s(end)\n",s1);
	printf("s11 = %s(end)\n",s11);

	printf("----------------------------------------------\n");

	char s2[]="hello world!";
	char s22[]="hello world!";

	bzero(s2+2,4);
	ft_bzero(s22+2,4);

	printf("s2  = %s(end)\n",s2);
	printf("s22 = %s(end)\n",s22);

	printf("-----------------------------------------------\n");
	
	char s3[]="it's do or die";
	char s33[]="it's do or die";
	
	bzero(s3+5,3);
	ft_bzero(s33+5,3);

	printf("s3  = %s(end)\n",s3);
	printf("s33 = %s(end)\n",s33);



	//segmentation  fault  cases
	//bzero(s2+60,3);	
	//ft_bzero(s2+60,3);
}
