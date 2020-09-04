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

//overlapping cases:
//just because memcpy doesn't have to deal with overlapping regions, doesn't mean it doesn't deal with them correctly.The call with overlapping regions produces undefined behavior.Undefined behavior can work entirely as you expect on one platform; that doesn't mean it's correct or valid.

//some implementations of memcpy might still work for overlapping inputs but you cannot count of that behaviour. while memmove must allow for overlapping.

//in memmove function , the source memory  is copied into buffer and then moved to destination. so if the memory is overlapping , there are no side effects.
//in case of memcpy function , there is no extra buffer taken for source memory. The copying  is done directly on the memory so that when there is memory overlap , we get unexpected results.

//memmove is more sophisticated than memcpy such that it accounts for memory overlaps. The result of memmove is defined as if the src was copied into a buffer and then buffer copied into dst. this does not mean that the actual implementation uses any buffer, but probably does some pointer arithmetic.

//any overlap on memcpy leads to undefined behavior, and anything can happen: bad, nothing or even good .


#include <string.h>
#include <stdio.h>

int main(){

        printf("1------------------------------------------------------\n");
        char *src ="hello";
        char dst[]="h";

	//memcpy(dst, src, 6) : return : "hello" / dst: "hello" / src :"hello" (copy 6 elements from src 'h' 'e' 'l' 'l' 'o' '\0')
        //memcpy(dst, src, 7) : return : "hello"/ dst :"hello" / src :"hello"  (copy 7 elements from src 'h' 'e' 'l' 'l' 'o' '\0' 'character x')
        printf("return value : %s\n",(char *)memcpy(dst,src,4));//get an unexpected value
        printf("dst = %s\n",dst);
        printf("src = %s\n",src);


	printf("2-------------------------------------------------------\n");
	char *src1 ="hello";
        char dst1[]="safabarka"; // not char *dst1="safabarka"->segmentation fault - "safabarka" is read-only

	printf("return value : %s\n",(char *)memcpy(dst1,src1,4));//hellbarka
        printf("dst1 = %s\n",dst1);//hellbarka
        printf("src1 = %s\n",src1);//hello

	printf("3--------------------------------------------------------\n");
	char dst2[]="hello"; 
        char *src2 = &(dst2[2]);

 	printf("dst2 = %s\n",dst2); //"h e l l o"
	printf("src2 = %s\n",src2); //    "l l o"

  	printf("4---------------------------------------------------------\n");

 	dst2[2]='S';
  	printf("dst2 = %s\n",dst2);//"h e S l o"
        printf("src2 = %s\n",src2);//    "S l o"

 	printf("5---------------------------------------------------------\n");
       
	//overlapping case
        //src > dst
        printf("return value : %s\n",(char *)memcpy(dst2,src2,4));//"S l o" (copy 4 elements from src : 'S' 'l' 'o' '\0')
        printf("dst2 = %s\n",dst2);//"S l o"
        printf("src2 = %s\n",src2);//    "o"

        printf("6---------------------------------------------------------\n");

        //overlapping case
        //src < dst
        char src3[]="hello";  //"h e l l o"
        char *dst3=&(src3[2]);//    "l l o"

        printf("return value : %s\n",(char *)memcpy(dst3,src3,3)); // "h e l"
        printf("dst3 = %s\n",dst3);//    "h e l"
        printf("src3 = %s\n",src3);//"h e h e l"
}
