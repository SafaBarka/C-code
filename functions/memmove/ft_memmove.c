//in c programming language, the memmove function copies n characters from the object pointed by s2 into the object pointed to by s1, it returns a pointer to the destination.
//the memmove function will work if the objects overlap.
//void *memmove(void *s1, const void *s2, size_t n);
//s1 an array where s2 will be copied to .
//s2 the string to be copied
//n the number of characters to copy
//#include <string.h>

//a wide variety of standard library functions have among their effects copying byte sequences from one memory region to another . most of these functions have undefined behavior when the source and destination regions overlap.for example memcpy() funtion.==>because of the overlap, the resulting behavior is undefined.

//Among the standard library functions with a limitation of this kind are memcpy() , strcpy(), strcat(),sprintf(), and sscanf():
//the standard says of these and several other functions : if copying takes place between objects that overlap the behavior is undefined.

//memcpy() function is used to copy specified number of bytes from one memory to another.
//memmove() function is used to copy a speified number of bytes from one memory to another or to overlap on same memory.
//difference between memmove() and memcpy() is, overlap can happen on memmove(). whereas memory overlap won't happen in memcpy() and it should be done in non-destructive way .

//The C standard specifies two functions for copying memory regions, memcpy and memmove.The important difference is that it is undefined behavior to call memcpy with overlapping regions. one must use memmove for that.As names imply, memcpy copies data from one region to another. while memmove moves data whithin a region .(It's also perfectly aceptable to memmove between different regions.)
//THis subtle but imporatnt distinction allows memcpy to be optimized more aggressively . In the case of memmove between overlapping regions, care must be taken not to destroy the contents of the source before they are done copying.

//The memmove function copies n characters from the source to the destination object . In memmove before  copying the characters from source to destination object first copied the n character from source to the temporary array to the destination object. it prevents from the undefined behavior when the source and destination object overlaps.
//memmove is similar to memcpy but in memmove, we need to handle the overlapping scenario, so for example we can create a temporary array to handle the overlapping scenario.
#include <string.h>

#include <stdio.h>


void *ft_memmove(void *dst, const void *src, size_t n){

	size_t i = 0;
	if (dst == src)
		return dst;
	if (dst < src) 
		while ( i < n ){
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
	}
	else
		while (n--)
			*((unsigned char *)dst + n) = *((unsigned char *)src +n);
	return dst;
		
}
int main(){

	printf("1---------------------------------------\n");

	//overlapping case:
	char str1[]="THis is an example";
	
	//src 		= "THis is an example"
	//dst = src + 7 =        " an example"
	//src < dst copying from the end 
	printf("return value : |%s|\n",(char *)ft_memmove(str1 + 7,str1,10));//|THis is ane|

	printf("dst = |%s|\n",(char *)(str1+7));//|THis is ane|

	printf("src = |%s|\n",(char *)(str1));//|THis isTHis is ane|


	printf("2---------------------------------------------\n");
	
	//overlapping case:
	char str2[]="THi is an example";

	//dst =str2 		="THi is an example"
	//src = str2+3 		=   " is an example"
	//dst < src <==> src > dst 
	//copying from the begening.
	printf("return value : |%s|\n",(char *)ft_memmove(str2 ,str2 + 3,10));//| is an exaexample|

	printf("dst = |%s|\n",(char *)(str2));//| is an exaexample|
	
	printf("src = |%s|\n",(char *)(str2 + 3));//| an exaexample|

	printf("3---------------------------------------------\n");

	char str3[]="hello world!";

	//src 		= "hello world!"	
	//dst = str3 + 3 = "   lo world!"
	//src < dst copying from the end
	printf("return value : |%s|\n",(char *)ft_memmove(str3 + 3,str3,7));//|hello wd!|

	printf("dst = |%s|\n",(char *)(str3+6));//|lo wd!|
	
	printf("src = |%s|\n",(char *)(str3));//|helhello wd!|

	printf("4------------------------------------------------\n");

	//simple case , no overlapping
	char s1[]="barka";

	char *s2="safa";
	
	printf("return value : |%s|\n",(char *)ft_memmove(s1 ,s2,7));//|safa|

	printf("dst = |%s|\n",(char *)(s1));//|safa|
	
	printf("src = |%s|\n",(char *)(s2));//|safa|


}
