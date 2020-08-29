//in c programming language, the memmove function copies n characters from the object pointed by s2 into the object pointed to by s1, it returns a pointer to the destination.
//the memmove function will work if the objects overlap.
//void *memmove(void *s1, const void *s2, size_t n);
//s1 an array where s2 ill be copied to .
//s2 the string to be copied
//n the number of characters to copy
//#include <string.h>

//a wide variety of standard library functions have among their effects copying byte sequences from one memory region to another . most of these functions have undefined behavior when the source and destination regions overlap.for example memcpy() funtion.==>because of the overlap, the resulting behavior is undefined.

//Among the standard library functions with a limitation of this kind are memcpy() , strcpy(), strcat(),sprintf(), and sscanf():
//the standard says of these and several other functions : if copying takes place between objects that overlap the behavior is undefined.

//memcpy() function is used to copy specified number of bytes from one memory to another.
//memmove() function is used to copy a speified number of bytes from one memory to another or to overlap on same memory.
//difference between memmove() and memcpy() is, overlap can happen on memmove(). whereas memory overlap won't happen in memcpy() and it should be done in non-destructive way .
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

	char str1[]="THis is an example";

	printf("ft_memmove return value : %s\n",(char *)ft_memmove(str1 + 7,str1,10));

	printf("dst = %s\n",(char *)(str1+7));
	
	printf("src = %s\n",(char *)(str1));



	char str2[]="THis is an example";

	printf("memmove return value : %s\n",(char *)memmove(str2 + 7,str2,10));

	printf("dst = %s\n",(char *)(str2+7));

	printf("src = %s\n",(char *)(str2));


	printf("2---------------------------------------------\n");
	
	char str3[]="THi is an example";

	printf("ft_memmove return value : %s\n",(char *)ft_memmove(str3 ,str3 + 3,10));

	printf("dst = %s\n",(char *)(str3));
	
	printf("src = %s\n",(char *)(str3 + 3));

	
	char str4[]="THi is an example";

	printf("memmove return value : %s\n",(char *)memmove(str4 ,str4 + 3,10));

	printf("dst = %s\n",(char *)(str4));
	
	printf("src = %s\n",(char *)(str4 + 3));

	printf("8---------------------------------------------\n");

	char str5[]="hello world!";
	
	printf("ft_memmove return value : %s\n",(char *)ft_memmove(str5 + 3,str5,7));

	printf("dst = %s\n",(char *)(str5+6));
	
	printf("src = %s\n",(char *)(str5));

	char str6[]="hello world!";
	
	printf("memmove return value : %s\n",(char *)memmove(str6 + 3,str6,7));

	printf("dst = %s\n",(char *)(str6+6));
	
	printf("src = %s\n",(char *)(str6));

	printf("9------------------------------------------------\n");

	char s1[]="barka";

	char *s2="safa";
	
	printf("ft_memmove return value : %s\n",(char *)ft_memmove(s1 ,s2,7));

	printf("dst = %s\n",(char *)(s1));
	
	printf("src = %s\n",(char *)(s2));


}
