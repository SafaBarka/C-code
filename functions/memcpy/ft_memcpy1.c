#include <stdio.h>

#include <string.h>

int main(){
	/*
	//segmentation fault 
	char *src = NULL;
	char *dst = NULL;

	printf("return value = %s\n",(char *)memcpy(dst,src,3));//null
	printf("src = %s\n",src);//null
	printf("dst = %s\n",dst);//null

	*/
	printf("-----------------------------------\n");
	//set the size to 0 ==> no segmentation fault
	char *src = NULL;
	char *dst = NULL;

	printf("return value = %s\n",(char *)memcpy(dst,src,0));//null
	printf("src = %s\n",src);//null
	printf("dst = %s\n",dst);//null

	printf("---------------------------------\n");
	/*
	//segmantation fault
	//number of bytes < strlen(dst) but src = Null
	char *src1 = NULL;
	char dst1[] = "hello";

	printf("return value = %s\n",(char *)memcpy(dst1,src1,2));
	printf("src1 = %s\n",src1);
	printf("dst1 = %s\n",dst1);
	*/

	printf("-------------------------------------\n");
	// it works even if strlen(src) < number of bytes
	char *src1 = "h";
	char dst1[] = "hello";

	printf("return value = %s\n",(char *)memcpy(dst1,src1,2));
	printf("src1 = %s\n",src1);
	printf("dst1 = %s\n",dst1);

	printf("---------------------------------------\n");

	// number of bytes  > strlen(dst)
	
	char *src2 = "h";

	char dst2[]="r";

	printf("return value = %s\n",(char *)memcpy(dst2,src2,5));
	printf("src2 = %s\n",src2);
	printf("dst2 = %s\n",dst2);

	
}
