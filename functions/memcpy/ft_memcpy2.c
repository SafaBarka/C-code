#include <stdio.h>
#include <string.h>
void *ft_memcpy1(void *dst,const void *src, size_t n){
	unsigned char *d;

	unsigned char *s;

	d= (unsigned char *)dst;

	s = (unsigned char *)src;

	while (n--)
		*d++ = *s++;
	return (dst);
}

void *ft_memcpy2(void *dst, const void *src, size_t n){
	unsigned char *d;

	unsigned char *s;

	d = (unsigned char *)dst;

	s = (unsigned char *)src;

	while (n > 0){
		*d++ = *s++;
		n--;
	}

	return (dst) ;
}

void *ft_memcpy3(void *dst, void const *src, size_t n){
	while (n > 0){
		((char *)dst)[n - 1] = ((char *)src)[n-1];

		n--;
	}
	return ((void *)dst);

}

void *ft_memcpy4(void *dst, const void *src, size_t n){
	size_t i;

	char *d;

	char *s;

	i = 0;

	d = (char *)dst;

	s = (char *)src;

	while (i < n){
		d[i] = s[i];
		i++;
	}

	return dst;
}

void *ft_memcpy5(void *dst, const void *src , size_t n){
	size_t i ;

	i = 0;

	if (dst == src && dst == NULL)
		return NULL;

	while (i < n){
		((char *)dst)[i] =((char *)src)[i];
		i++;
	}

	return (dst);
}

void *ft_memcpy(void *dst, void *src,size_t n){

        int i = -1;
      //  if (dst == NULL && src == NULL && n== 0)
        //        return dst;

        while(++i < n )
                *((char *)dst + i)=*((char *)src + i);
        return dst;
}


int main(){

	//size == 0
	
 	char *dst = NULL;

 	char *src = NULL;

	
	printf("return value : %s\n",(char *)memcpy(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);

	printf("return value : %s\n",(char *)ft_memcpy1(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
	
	printf("return value : %s\n",(char *)ft_memcpy2(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy3(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy4(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy5(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
	
	printf("return value : %s\n",(char *)ft_memcpy(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	


	printf("**********************************************\n");

	dst = "hello world";

	printf("return value : %s\n",(char *)memcpy(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);

	printf("return value : %s\n",(char *)ft_memcpy1(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
	
	printf("return value : %s\n",(char *)ft_memcpy2(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy3(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy4(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy5(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
	
	printf("return value : %s\n",(char *)ft_memcpy(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	


	printf("***********************************************\n");

	dst = NULL;

	src = "it's me";

	printf("return value : %s\n",(char *)memcpy(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);

	printf("return value : %s\n",(char *)ft_memcpy1(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
	
	printf("return value : %s\n",(char *)ft_memcpy2(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy3(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy4(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy5(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	

	printf("return value : %s\n",(char *)ft_memcpy(dst, src , 0));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	


	printf("*************************************************\n");
	printf("segmentation fault case\n");

/*	printf("return value : %s\n",(char *)memcpy(dst, src , 3));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);
*/
/*	printf("return value : %s\n",(char *)ft_memcpy1(dst, src , 2));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
*/	
/*	printf("return value : %s\n",(char *)ft_memcpy2(dst, src , 3));
	printf("dst1 = %s\n",dst);
	printf("src1 = %s\n",src);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy3(dst, src , 3));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy4(dst, src , 3));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy5(dst, src , 3));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy(dst, src , 3));
	printf("dst = %s\n",dst);
	printf("src = %s\n",src);	
*/


	printf("*************************************************\n");

	char  dst1[] ="C language";

	char *src1 = "it's me";

	printf("return value : %s\n",(char *)memcpy(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);

	printf("return value : %s\n",(char *)ft_memcpy1(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
	
	printf("return value : %s\n",(char *)ft_memcpy2(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	

	printf("return value : %s\n",(char *)ft_memcpy3(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	

	printf("return value : %s\n",(char *)ft_memcpy4(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	

	printf("return value : %s\n",(char *)ft_memcpy5(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	

	printf("return value : %s\n",(char *)ft_memcpy(dst1, src1 , 0));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	

	printf("**************************************************\n");

	//testng size == 4
	//testing size == 9
	//testing size == 11
	
/*	printf("return value : %s\n",(char *)memcpy(dst1, src1 , 11));//it'snguage - it's me -it's me
	printf("dst1 = %s\n",dst1);//it'snguage - it's me - it's me
	printf("src1 = %s\n",src1);//it's me - it's me -it's me
*/
/*	printf("return value : %s\n",(char *)ft_memcpy1(dst1, src1 ,11 ));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
*/	
/*	printf("return value : %s\n",(char *)ft_memcpy2(dst1, src1 , 11));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy3(dst1, src1 , 11));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy4(dst1, src1 , 11));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy5(dst1, src1 , 11));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
*/
/*	printf("return value : %s\n",(char *)ft_memcpy(dst1, src1 , 11));
	printf("dst1 = %s\n",dst1);
	printf("src1 = %s\n",src1);	
*/
}
