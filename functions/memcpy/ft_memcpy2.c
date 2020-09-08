//void *memcpy(void *dst, const void *src, size_t count);
//copies count characters from the object pointed to by src to the object pointed to by dest. both objets are interpreted as arrays of unsigned char .
//the behavior is undefined if access occurs beyond the end of the dest array. if the objects overlap , the behavior is undefined. the behavior is undefined if either dest or src is an invalid or null pointer.	
//Return value : returns a copy of dest.
//memcpy may be used to set the eefective type of an object obtained by an allocation function.
//memcpy is the fatest library routine for memory-to-memory copy. it is usually more efficient than strcpy, which must scan the data it copies or memmove, which must take precautions to handle overlapping inputs.
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

        size_t i = 0;

        while(i < n)
	{
                *((char *)dst + i)=*((char *)src + i);
		++i;
	}
        return dst;
}


int main(){

}
