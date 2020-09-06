
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

        while(++i < n)
                *((char *)dst + i)=*((char *)src + i);
        return dst;
}


int main(){

}
