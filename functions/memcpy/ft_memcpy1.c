#include <stdio.h>

#include <string.h>

void *ft_memcpy(void *dst, void *src,size_t n){

        while(n--)
                *((char *)dst + n)=*((char *)src + n);
        return dst;
}

int main(){
	printf("1-----------------------------------\n\n");
	
	printf("segmentation fault case\n");
	char *src = NULL;
	char *dst = NULL;

	//segmentation fault 
	
	/*
	//segfault because of the instruction in the loop.
	printf("return value = %s\n",(char *)ft_memcpy(dst,src,3));
	printf("src = %s\n",src);
	printf("dst = %s\n",dst);

	*/

	printf("2-----------------------------------\n\n");

	//because n = 0 , it will not enter the loop and return null.

	printf("return value = %s\n",(char *)ft_memcpy(dst,src,0));//null
	printf("src = %s\n",src);//null
	printf("dst = %s\n",dst);//null


	printf("3---------------------------------\n\n");
	
	printf("segmentation fault case\n");
	//segmantation fault

	char *src1 = NULL;
	char dst1[] = "hello";
	/*
 	//segfault because of the instruction in the loop. (accessing an address using a NULL pointer).
	printf("return value = %s\n",(char *)memcpy(dst1,src1,2));
	printf("src1 = %s\n",src1);
	printf("dst1 = %s\n",dst1);
	*/	

	printf("4-------------------------------------\n\n");

	char *src2 = "h";

	char dst2[]="yes";
	
	printf("return value = %s\n",(char *)ft_memcpy(dst2,src2,5));//"h"
	printf("src1 = %s\n",src2);//"h"
	printf("dst1 = %s\n",dst2);//"h"
}
