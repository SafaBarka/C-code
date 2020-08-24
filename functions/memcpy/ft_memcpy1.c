#include <stdio.h>

#include <string.h>

void *ft_memcpy(void *dst, void *src,size_t n){

        int i = -1;
        int j = n;
        if (dst == NULL && src == NULL && n== 0)
                return dst;

        while(++i < j )
                *((char *)dst + i)=*((char *)src + i);
        return dst;
}

int main(){
	printf("1-----------------------------------\n\n");
	
	printf("segmentation fault case\n");
	char *src = NULL;
	char *dst = NULL;

	//segmentation fault 
	
	/*
	printf("return value = %s\n",(char *)memcpy(dst,src,3));
	printf("src = %s\n",src);
	printf("dst = %s\n",dst);

	*/

	/*
	printf("return value = %s\n",(char *)ft_memcpy(dst,src,3));
	printf("src = %s\n",src);
	printf("dst = %s\n",dst);

	*/

	printf("2-----------------------------------\n\n");

	//set the size to 0 ==> no segmentation fault

	printf("return value = %s\n",(char *)memcpy(dst,src,0));//null
	printf("src = %s\n",src);//null
	printf("dst = %s\n",dst);//null

	printf("\n");

	printf("return value = %s\n",(char *)ft_memcpy(dst,src,0));//null
	printf("src = %s\n",src);//null
	printf("dst = %s\n",dst);//null

	printf("\n");

	printf("3---------------------------------\n\n");
	
	printf("segmentation fault case\n");
	//segmantation fault
	//if src or dst is null , and the size != 0 
	char *src1 = NULL;
	char dst1[] = "hello";
/*
	printf("return value = %s\n",(char *)memcpy(dst1,src1,2));
	printf("src1 = %s\n",src1);
	printf("dst1 = %s\n",dst1);
*/	
	
/*	printf("return value = %s\n",(char *)ft_memcpy(dst1,src1,2));
	printf("src1 = %s\n",src1);
	printf("dst1 = %s\n",dst1);
*/	

	printf("4-------------------------------------\n\n");

}
