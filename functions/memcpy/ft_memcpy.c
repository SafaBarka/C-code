//the memcpy function copies n characters from the source object to the destination object.if the source and destination objects overlap, the behavior of memcpy is undefined.
//in memcpy, we need to pass the address of source and destination buffer, and the number of bytes (n) which you want to copy.

//void *memcpy(void * dst, const void *src, size_t n);
//src --> pointer to the source object
//dst -->pointer to the dest object
//n   -->number of bytes to copy
//this function returns the pointer to the destination buffer(dst)

//remember the following points before using the memcpy in c.
//the size of the destination buffer should be greater than the number of bytes you want to copy strlen(dst) > n
//the memory of the source and destination buffer should not be overlap.
//memcpy does not chaeck the terminating null character, so carefully using with strings.
//the behavior of memcpy can be undefined if you try to access the destination and source buffer beyond their length.
//memcpy does not check the validity of the destination buffer.

#include <string.h>
#include <stdio.h>

int main(){

	//the size of destination should be greater than n
	char *src ="hello";
	char dst[]="h";
	
	//get an unexpected values.
	//strlen(dst) < 4
	printf("return value : %s\n",(char *)memcpy(dst,src,4));	
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);

	printf("-------------------------------------------------------\n");

	char dst1[]="safabarka"; // not char *dst1="safabarka"

	//strlen(dst)>4
	printf("return value : %s\n",(char *)memcpy(dst1,src,4));	
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src);

	printf("--------------------------------------------------------\n");

	//the memory of the source and destination buffer should not be overlap.
	
	char dst2[]="hello";
	char *src2 = &(dst2[2]);

	printf("dst2 = %s\n",dst2);
	printf("src2 = %s\n",src2);

	printf("-------------------------------------------\n");

	dst2[2]='S';

	printf("dst2 = %s\n",dst2);
	printf("src2 = %s\n",src2);

	printf("-------------------------------------------\n");

	printf("return value : %s\n",(char *)memcpy(dst2,src2,4));	
	printf("dst2 = %s\n",dst2);
	printf("src2 = %s\n",src2);


	printf("--------------------------------------------\n");

	printf("return value : %s\n",(char *)memcpy(src2,dst2,3));
	
	printf("dst2 = %s\n",dst2);
	printf("src2 = %s\n",src2);



}
