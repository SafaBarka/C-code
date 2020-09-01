//The c library function void *memchr(const void *str, int c, size_t n) searches for the first occurence of the character c (an unsigned char) int the firsst n bytes of the string pointed to , by the argument str.
//str - this is the pointer to the block of memory where the search is performed.
//c -this is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
//n- this is the number of bytes to be analyzed.
//return value: this function returns a pointer to the matching byte or NUKK if the character does not occur in the given memory area.


//the C member function is  a String function, which will find the first ocurence of the character, and returns the pointer to it.
#include <string.h>

#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n){

	int i = 0;

	while (i < n){
		if ( ((unsigned char *)str)[i] == (unsigned char)c)
			return (void *)(str + i);
		i++;
	}

	return NULL;
	
}
int main(){

	const char str[]="hello.class !";
	
	const char ch = 'c';

	char *ret;

	ret = ft_memchr(str, ch , strlen(str));

	printf("|%s|\n",ret) ;//'r'->return |NULL| - '.'->return |.class|- 'c'->return |class !|


	return(0);
}
