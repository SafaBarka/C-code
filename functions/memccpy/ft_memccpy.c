//void  *memccpy(void *dest, const void *src, int c, size_t n);
//la fonction memccpy() copie au plus n octets de la zone memoire src vers la zone memoire dest.s'arretant des qu'elle rencontre le caractere c.
//la fonction memccpy() renvoie un pointeur sur le caractere immediatement apres c dans la zone dest, ou NULL si c'est n'a pas ete trouve dans les n premiers carateres de src.

//memccpy - copy memory area
//include <string.h>
//copies no more than n bytes from memory area src to memory area dest, stopping when the charactere  found.
//if memory areas overlap the results are undefined.
// the memccpy() function return a  pointer to the next character in the dest after c, or NULL if c was not found in the first n characters of src.

//the memccpy() function shall copy bytes from memory area src into dest, stopping after the first occurence of byte c(converted to unsigned char) is copied, or after n bytes are copied.whichever comes first. if copying takes place between objects that overlap, the behavior is undefined.//the memccpy() function shall return a pointer to the byte after the copy of c in src. or a null pointer if c was found in the first n bytes of src.
//the memccpy() function does not check for the overflow of the receiving memory area.
//dest: points to the memory area to which memccpy() copies bytes.
//src: points to the memory area from which memccpy() copies bytes,
//c :represent the unsigned char that memccpy() copied. after the first occurence of this parameter, memccpy() stops its copy operation unless n bytes were copied first.
//n: represents the number of bytes that memccpy() copied. This operation stops after n bytes has been reached, unless c came first.

#include <string.h>

#include <stdio.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n){

	size_t i = 0;

	while (i < n)                                                              {
		*((unsigned char *)dst + i) =*((unsigned char *)src + i);
		i++;
		if ( ((unsigned char *)src)[i-1] == (unsigned char)c)
			return  (void *)(dst+ i);
	}
	return NULL;
}
int main(){
	printf("1------------------------------------------\n");

	char *dst = NULL;

	char *src = NULL;

	printf("return value : %s\n",(char *)ft_memccpy(dst, src ,'c', 0));//null
        printf("dst = %s\n",dst);//null


	printf("2-------------------------------------------\n");

	//segfault case
	printf("segmentation fault case :\n");
	/*
	printf("return value : %s\n",(char *)ft_memccpy(dst, src ,'c', 2));
        printf("dst = %s\n",dst);
	*/

	printf("3--------------------------------------------\n");
	
	char dst1[]="hello";

	char *src1 = NULL;

        printf("return value : %s\n",(char *)ft_memccpy(dst1, src1 ,'c', 0));//null
        printf("dst = %s\n",dst1);//hello


	printf("4----------------------------------------------\n");

	char dst2[] = "hello";

        src1 = "my world";

        printf("return value : %s\n",(char *)ft_memccpy(dst2, src1 ,'c', 3));//null
        printf("dst = %s\n",dst2);//"my lo"

	printf("5-----------------------------------------------\n");

	char dst3[] = "hello";

        src1 = "my world";

        printf("return value : %s\n",(char *)ft_memccpy(dst3, src1 ,'w', 4));//o
        printf("dst = %s\n",dst3);//"my wo"

  	printf("6-----------------------------------------------\n");

        char dst4[] = "hello";

        char *src4 = "my world";

        printf("return value : %s\n",(char *)ft_memccpy(dst4, src1 ,'r', 4));//null
        printf("dst = %s\n",dst4);//"my wo"

        printf("7-----------------------------------------------\n");

        char dst5[] = "safa barkaa";

        char *src5 = "bluecat";

        printf("return value : %s\n",(char *)ft_memccpy(dst5, src5 ,'l', 3));//fa barkaa
        printf("dst = %s\n",dst5);//blfa barkaa


	printf("8------------------------------------------------\n");

	char dst6[]="thank you";

	char *src6 ="thank you";

	printf("return value : %s\n",(char *)ft_memccpy(dst6, src6 ,'k', 7));// you
        printf("dst = %s\n",dst6);//thank you





}
