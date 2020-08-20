//memset() is used to fill a block of memory with particular value.
//#include <string.h>.
//void *memset(void *str,int c,size_t n).
//copies c (represented as unsigned char) into the first n characters of the object or memory block pointed by str. 
//str ==> starting address of memory to be filled.
//c  ==> value to be filled.
//n ==> number of bytes to be filled.
//because we have void pointer , we can past any type of pointer to this function.
//memset() does not distinguish between int and char , it works byte by byte.
#include <string.h>
#include <stdio.h>

void printArray(int arr[] ,int n){
	for(int i = 0 ; i < n ;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int main(){
	char  str[50]="Hello world !";

	printf("before memset() str = %s\n",str);

	//fill 4 characters starting from str[1] with '*'
	memset(&(str[1]) , '*' , 4);

	printf("after memset() str = %s\n",str);//H**** world !

	//fill 3 characters starting from str[5] with '/'
	//str +5 points to the character number 5 (the first space). 
	memset(str+ 5 , '/' , 3);

	printf("str = %s\n",str);//H****///rld

	printf("--------------------------------------------------\n");

	printf("size of int = %lu bytes\n",sizeof(int));
	printf("size of char= %lu bytes\n",sizeof(char));
	printf("size of unsigned char = %lu bytes\n",sizeof(unsigned char));
	printf("size of size_t = %lu bytes\n",sizeof(size_t));
	printf("size of unsigned long = %lu bytes\n",sizeof(unsigned long));

	printf("--------------------------------------------------\n");

	int n = 10;

	int arr[n];
	
	printArray(arr,n); 

	//fill the array with 2;
	//one byte for 0 is 00000000
	memset(arr , 0 , n*sizeof(arr[0]));

	printf("after memset() = ");

	printArray(arr,n);

	printf("-------------------------------------------------------\n");

	//one byte for 2 is  00000010.
	//filling every byte with 2 ==> 00000010 00000010 00000010 00000010 ==> 3368018 in decimal 
	memset(arr , 2 , n*sizeof(arr[0]));

	printArray(arr,n);

	printf("--------------------------------------------------------\n");
	
	//one byte for -1 is 11111111
	//filling every byte with -1 ==> 11111111 11111111 11111111 11111111 ==> -1 in decimal
	memset(arr, -1 , n *sizeof(arr[0]));

	printArray(arr,n);

	//when all bits of a number are 0 , it's value is als 0 .
	//however, if all bits are 1 the value is -1
	
	printf("---------------------------------------------------------\n");

	//one byte  for 1 is 00000001 
	//filling every byte with 1 ==> 00000001 00000001 00000001 000000001==>16843009 in decimal
	memset(arr,1,n*sizeof(arr[0]));

	printArray(arr,n);

	//memset works character by character and an integer contains more that one bytes(or characters)
	
	printf("----------------------------------------------------------\n");

	memset(arr, -128,n*sizeof(arr[0]));

	printArray(arr,n);
}
