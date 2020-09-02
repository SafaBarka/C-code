//in the C programming language, the memcmp function return a negative, zero , or positive integer depending on whether the first n characters of the object pointed to by s1 are less than, equal to, or greater than the first n characters of the object pointed to by s2.
//int memcmp(const void *s1, const void *s2, size_t n);
//s1 -> an array to compare
//s2 -> an array to compare
//n -> the number of characters to compare.
//the memcmp function returns an integer. the return values are as follows:
//0 -> s1 and s2 are equal
//negative integer the stopping character in s1 was less than the stopping character in s2
//positive integer -> the stopping character in s1 was greater that the stopping character in s2.
//#include <string.h>

//the function memcmp compares the size bytes of memory begening at a1 against the size bytes of memory begening at a2 . the value returned has the same sign as the difference between the first differing pair of bytes (interpreted as unsigned char), if the content of the two blocks are equal , memcmp returns 0.


//int memcmp(const void *lhs, const void *rhs, size_t count);
//compares the first count characters of the objects pointed to by lhs and rhs. the comparaison is done lexicographically.
//the sign of the result is the sign of the difference between the values of the first pair of bytes (both interpreted as unsigned char) that differ in the object being compared.
//the behavior is undefined if access occurs beyond the end of either object pointed to by lhs and rhs . the behavior is undefined if either lhs or rhs is a null pointer.
//lhs , rhs -> pointers to the objects to compare
//count -> number of bytes to examine.
//return value :
//negative value if lhs appears before rhs in lexicographical order.
//zero if lhs and rhs compare equal, or if count is zero.
//positive value if  lhs appears after rhs in lexicographical order
//this function reads object representations,not the object values, and is typically meaningful for byte arrays only.
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s11 = (unsigned char *)s1;

	unsigned char *s22 = (unsigned char *)s2;

	while(n--){
		if(*s11 != *s22) 
			return (*s11 - *s22);
		s11++;
		s22++;
	}
	return 0;
}

void demo(const char *lhs, const char *rhs, size_t sz)
{
	for(size_t n = 0 ; n < sz ; ++n)
		putchar(lhs[n]);

	int rc = ft_memcmp(lhs, rhs ,sz);

	const char *rel = rc < 0 ? " precedes" : rc > 0 ? " follows " : " compares equal ";
	fputs(rel,stdout);

	for(size_t n ; n < sz ;++n)
		putchar(rhs[n]);
	puts(" in lexicographical order");
}
int main(){
	printf("1------------------------------------------\n");
	char str1[15];

	char str2[15];

	int ret;

	memcpy(str1, "ABcdef",6);
	memcpy(str2, "ABCDEF",6);

	ret = ft_memcmp(str1, str2, 2);

	if (ret > 0)
		printf("ret = %d -> str2 is less than str1\n",ret);
	else if (ret < 0)
		printf("ret = %d -> str1 is less than str2\n",ret);
	else
		printf("ret = %d ->str1 is equal to str2\n",ret);
	printf("2------------------------------------------\n");

	char a1[]={'a','b','c'};

	char a2[sizeof a1]={'a','b','d'};

	demo(a1, a2, sizeof a1);
	demo(a2, a1, sizeof a1);
	demo(a1, a1, sizeof a1);
	
}
