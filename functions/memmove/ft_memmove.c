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

void *ft_memcpy(void *dst , const void *src , size_t n){
	size_t i =0;
	while (i < n){
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return dst;
}

void *ft_memcpy1(void *dst, const void *src, size_t n){

	int  i =(int)n;
	
	while (i--)
		*((unsigned char *)dst + i) = *((unsigned char *)src +i);
	return dst;
	
}
int main(){
	//overlap case :dst after src

	printf("1---------------------------------------\n");

	char str[]="THis is an example";

	printf("memcpy return value : %s\n",(char *)ft_memcpy(str + 7,str,10));//THis isTHie

	printf("dst = %s\n",(char *)(str+7));//This isTHie
	
	printf("src = %s\n",(char *)(str));//THis isTHie isTHie


	printf("2---------------------------------------\n");

	char str1[]="THis is an example";

	printf("memcpy return value : %s\n",(char *)ft_memcpy1(str1 + 7,str1,10));//THis is ane

	printf("dst = %s\n",(char *)(str1+7));//This is ane
	
	printf("src = %s\n",(char *)(str1));//THis isTHis is ane


	printf("3---------------------------------------\n");

	char str2[]="THis is an example";

	printf("memcpy return value : %s\n",(char *)memcpy(str2 + 7,str2,10));//THis is anle

	printf("dst = %s\n",(char *)(str2+7));//This is anle
	
	printf("src = %s\n",(char *)(str2));//THis isTHis is ane


	printf("4-------------------------------------------\n");

	char str3[]="THis is an example";

	printf("memmove return value : %s\n",(char *)memmove(str3 + 7,str3,10));//THis is ane

	printf("dst = %s\n",(char *)(str3+7));//THis is ane


	printf("src = %s\n",(char *)(str3));//THis isTHis is ane

	printf("****************************************************************\n");
	//overlap case : src after dst 
	printf("5---------------------------------------------\n");
	
	char str5[]="THis is an example";

	printf("memcpy return value : %s\n",(char *)memcpy(str5,str5 + 3,10));

	printf("dst = %s\n",(char *)(str5));
	
	printf("src = %s\n",(char *)(str5 + 7));

	printf("6---------------------------------------------\n");
	
	char str6[]="THis is an example";

	printf("memmove return value : %s\n",(char *)memmove(str6 ,str6 + 3,10));

	printf("dst = %s\n",(char *)(str6));
	
	printf("src = %s\n",(char *)(str6 + 7));

}
