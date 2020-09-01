#include <stdio.h>

#include <string.h>

void *ft_memchr1(const void *s, int c, size_t n){

	unsigned char *str;

	unsigned char ch;

	str = (unsigned char *)s;

	ch = (unsigned char )c;

	while(n--){
		if (*str == ch)
			return str;
		str++;
	}
	return NULL;


}

void *ft_memchr2(const void *s, int c, size_t n){
	
	unsigned char *str;

	unsigned int i;

	str = (unsigned char *)s;

	i = 0;

	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str +i);
		i++;
	}
	return NULL;	
}

void *ft_memchr3(const void *s, int c, size_t n){
	size_t i;

	unsigned char *str;

	if (s!= NULL){
		str = (unsigned char *)s;

		i = 0;

		while (i < n)
		{
			if (str[i] == (unsigned char)c)
				return (&str[i]);
			i++;
		}
	}
	return NULL;
}

void *ft_memchr4(const void *s, int c, size_t n){
	size_t index;

	unsigned char *str;

	index = -1;

	str = (unsigned char *)s;

	while (++index < n)
		if (str[index] == (unsigned char)c)
			return (&(str[index]));
	return NULL;
}

void *ft_memchr5(const void *s, int c, size_t n){
	size_t index;

	index = 0;

	while (index < n){
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (&((unsigned char *)s)[index]);
		index++;
	}
	return NULL;
}
int main(){

	const char str[]="hello..class !";
	const char *s =NULL;
        const char ch = 's';

        char *ret;

        ret = ft_memchr5(str, ch , strlen(str));

        printf("|%s|\n",ret) ;//'r'->return |NULL| - '.'->return |.class|- 'c'->return |class !|

}
