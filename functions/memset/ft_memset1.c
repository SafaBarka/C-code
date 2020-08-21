//the function memset(memory setter) is a C standard library function that sets, or, more sematically , fills a block of memory with a value.
//parameters : void *s , int c, size_t n

//the first parameter s , represents a pointer to the block of memory to fill. the type void in the context signifies that the pointer can reference memory to any type.

//the second parameter, c is the character to fill s with. note that while this parameter is received as an int , it is converted to an unsigned char when used to fill memory, to ensure that the function keeps just the eight bits needed from the receiver integer

//the third parameter n , represents the size of the memory block to fill. while the pointer s references locatio of the memory to fill, it says nothing about how much memory to fill. the parameter n,which is passed as a size_t to ensure valid , positive size, signals just this information.

//Return Value void *
//after filling the block of memory referenced by s, the function turs around and returns a pointer to s, the same (generically-typed)memory address passed when you call the function.

//memset :fills the first (n) bytes of the memory area  pointed to by (s) whith the constant byte (c).
// (s) a pointer to the memory area to be filled.
// (c) the character to fill the memory area with
// (n) the number of bytes to be filled
// returna pointer to the filled memory area 
// void *memset(void *s, int c, size_t n);

// to use the function memset , include the C standard library using the header <string.h>

//in general , memeset is a great tool to keep in mind when working with c programs involving memory allocation.
//remember if you can't initialize it - memset it.


//to use printf
#include <stdio.h>
//to use memset
#include <string.h>
//to use EXIT_SUCCESS
#include <stdlib.h>


int main(){

	char memory[8];

	//fill the memory block with null bytes
	
	memset(memory,'\0',8);
	printf("memory = %s(end)\n",memory);

	printf("-------------------------\n");

	//fill the memory block with hashes
	
	memset(memory,'#',8);
	printf("memory = %s\n",memory);

	printf("--------------------------\n");

	//fill the memory block with dollar sign
	
	memset(memory,'$',8);
	printf("memory = %s\n",memory);

	printf("--------------------------\n");

	//when programming in c, it's best practice to maintain tight control of memory; when you allocate memory initialize it , or do not immediately know what to initialize with - memset it.
	
	printf("----------------------------------\n");
	printf("sizeof int %lu bytes\n",sizeof(int));
	printf("sizeof char %lu bytes\n",sizeof(char));
	printf("size of 'a' %lu bytes\n",sizeof('a'));

	return (EXIT_SUCCESS);
}
