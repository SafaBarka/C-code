#include <stdio.h>

#include <string.h>


void *ft_memccpy1(void *dst, const void *src, int c ,size_t n){

	unsigned char f;

	unsigned char *d;

	unsigned char *s;


	f = (unsigned char)c;

	d = (unsigned char *)dst;

	s = (unsigned char *)src;

	while(n--){
		*d++ = *s++;
		if (*(d -1) == f)
			return d;
	}
	return NULL;
}

void *ft_memccpy2(void *dst, const void *src, int c, size_t n){
	unsigned  int i;

	unsigned char *d;

	unsigned char *s;

	i = 0;

	d = (unsigned char *)dst;

	s = (unsigned char *)src;

	while (i < n){
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (void *)&d[i + 1];
		i++;
	}
	return NULL;
}

void *ft_memccpy3(void *dst, const void *src, int c, size_t n){
	unsigned char *d;

	unsigned char *s;

	d = (unsigned char *)dst;

	s = (unsigned char *)src;

	while (n-- && *s)
		if ((*d++ = *s++) == (unsigned char)c)
			return d;
	return NULL;

}


void *ft_memccpy4(void *dst, const void *src, int c, size_t n){

	size_t i ;

	unsigned char *s;

	unsigned char *d;

	while (i < n)
	{
		if ((d[i] = s[i]) == (unsigned char)c)
			return (d + ++i);
		i++;
	}
	return NULL;
}

void *ft_memccpy5(void *dst, const void *src, int c, size_t n){
	size_t i;
	unsigned char *d;

	unsigned char *s;

	i = 0;

	if (dst == NULL || src == NULL)
		return NULL;

	d =(unsigned char *)dst;
	s = (unsigned char *)src;

	while (i < n){
		d[i] = s[i];

		if (s[i] == (unsigned char )c)
			return &d[i+1];
		i++;
	}

	return NULL;
}

void *ft_memccpy6(void *dst, const void *src, int c, size_t n){
	size_t i;

	char *d;

	char *s;

	i = 0;

	d = (char *)dst;

	s = (char *)src;

	while (i < n){
		d[i] = s[i];

		if (s[i] == c)
			return (d + i + 1);
		i++;
	}
	return NULL;
}

int main(){
 

}
