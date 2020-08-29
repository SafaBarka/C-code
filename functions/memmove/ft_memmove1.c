#include <stdio.h>

#include <string.h>

#include <stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t len){
	size_t  i = 0 ;
	while (i++ < len)
		*((unsigned char *)dst + i) = *((unsigned char *)src +i);

	return dst;
}
void *ft_memmove1(void *dst, const void *src ,size_t len){
	unsigned char *d;

	unsigned char *s;

	d = (unsigned char *)dst;

	s = (unsigned char *)src;

	if (d < s)
		while (len--)
			*d++ = *s++;
	else{
		*d += len;

		*s += len;

		while (len--)
			*--d = *--s;
	}
	return dst;
}

void *ft_memmove2(void *dst, const void *src, size_t len){

	size_t i;
	unsigned char *a;
	unsigned char *b;

	i = 0;

	a = (unsigned char *)dst;

	b = (unsigned char *)src;

	if (a > b)
		while (i < len)
		{
			a[len -1] = b[len -1];
			len--;
		}
	else
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	return dst;
}

void *ft_memmove3(void *dst, const void *src, size_t len){
	unsigned char *d;

	unsigned char *s;

	size_t i;

	d = (unsigned char *)dst;

	s = (unsigned char *)src;

	if (dst > src)
		while (len != 0)
		{
			len--;
			d[len] = s[len];
		}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dst;
}

void *ft_memmove4(void *dst, const void *src , size_t len)
{
	unsigned char *d;

	unsigned char *s;


	d = (unsigned char *)dst;

	s =(unsigned char *)src;

	if (s <= d)
		while (len-- > 0)
			d[len] = s[len];
	else
		ft_memcpy(dst, src ,len);
	return dst;
}

void *ft_memmove5(void *dst, const void *src, size_t len)
{
	char *d;

	char *s;

	if (!src || !dst)
		return NULL;
	if (dst <= src)
		return ft_memcpy(dst,src,len);
	d = (char *)dst;

	s = (char *)src;

	while (len)
	{
		len--;
		d[len]= s[len];
	}
	return dst;

}

void *ft_memmove6(void *dst, const void *src , size_t n)
{
	void *tmp;

	tmp = malloc(sizeof(char) * n);

	if (tmp != NULL){
		tmp = ft_memcpy(tmp,src,n);
		dst = ft_memcpy(dst, tmp ,n);
		free(tmp);
	}
	return dst;
}

void *ft_memmove7(void *dst, const void *src, size_t len){
	size_t index;

	index = -1;
	if (src < dst)
		while ((int)(--len) >= 0)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while(++index < len)
			((char *)dst)[index] = ((char *)src)[index];

	return dst;
}
int main(){


}
