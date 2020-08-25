//void (void *dest, const void *src, int c, size_t n);

//la fonction memccpy() copie au plus n octets de la zone memoire src vers la zone memoire dest.s'arretant des qu'elle rencontre le caractere c.

//la fonction memccpy() renvoie un pointeur sur le caractere immediatement apres c dans la zone dest, ou NULL si c'est n'a pas ete trouve dans les n premiers carateres de src.

//memccpy - copy memory area

//include <string.h>

//copies no more than n bytes from memory area src to memory area dest, stopping when the charactere  found.

//if memory areas overlap the results are undefined.

// the memccpy() function return a  pointer to the next character in the dest after c, or NULL if c was not found in the first n characters of src.


#include <string.h>

#include <stdio.h>

int main(){

	char *dst = NULL;

	char *src = NULL;

	printf("return value : %s\n",(char *)memccpy(dst, src ,'c', 0));//null
        printf("dst = %s\n",dst);//null

	printf("-------------------------------------------\n");

	//segfault case
	printf("segmentation fault case :\n");
	/*
	printf("return value : %s\n",(char *)memccpy(dst, src ,'c', 2));
        printf("dst = %s\n",dst);
	*/

	printf("--------------------------------------------\n");
	
	char dst1[]="hello";

	char *src1 = NULL;

        printf("return value : %s\n",(char *)memccpy(dst1, src1 ,'c', 0));//null
        printf("dst = %s\n",dst1);//hello

	printf("----------------------------------------------\n");

	char dst2[] = "hello";

        src1 = "my world";

        printf("return value : %s\n",(char *)memccpy(dst2, src1 ,'c', 3));//null
        printf("dst = %s\n",dst2);//"my llo"

	printf("-----------------------------------------------\n");

	char dst3[] = "hello";

        src1 = "my world";

        printf("return value : %s\n",(char *)memccpy(dst3, src1 ,'w', 4));//o
        printf("dst = %s\n",dst3);//"my wo"

  	printf("-----------------------------------------------\n");

        char dst4[] = "hello";

        char *src4 = "my world";

        printf("return value : %s\n",(char *)memccpy(dst4, src1 ,'r', 4));//null
        printf("dst = %s\n",dst4);//"my wo"

        printf("-----------------------------------------------\n");

        char dst5[] = "safa barkaa";

        char *src5 = "bluecat";

        printf("return value : %s\n",(char *)memccpy(dst5, src5 ,'l', 3));//fa barkaa
        printf("dst = %s\n",dst5);//blfa barkaa






       

}
