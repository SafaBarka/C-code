#include <stdio.h>

#include <string.h>

void *ft_memset(void *s, int c , size_t n){

	while(n--)
		((unsigned char *)s)[n]	= (unsigned char)c;
	return s;
}
void ft_bzero1(void *s ,size_t n){

	int i ;

	char *tmp;

	i = 0;

	tmp =(char *)s;

	while(n > 0){
		tmp[i] ='\0';

		i++;

		n--;
	}
}

void ft_bzero2(void *s ,size_t n){

	ft_memset(s,0,n);
	//or ft_memset(s,'\0',n);
	
}

void ft_bzero3(void *s,size_t n){
	
	unsigned char *p;

	size_t i;

	p = (unsigned char *)s;

	i = 0;

	while (i < n){
		p[i++] = 0;
	}
}

void ft_bzero4(void *s,size_t n){

	unsigned char *d;

	d = (unsigned char *)s;

	while(n > 0){

		*d++ = '\0';

		n--;
	}
}

void ft_bzero5(void *s, size_t n){

	unsigned char *ptr;

	ptr = (unsigned char *)s;

	while(n--)

		*ptr++ = '\0';
}

int main(){
	char s1[]="hello world !!";
	char s2[]="hello world !!";
	char s3[]="hello world !!";
	char s4[]="hello world !!";
	char s5[]="hello world !!";


	ft_bzero1(s1+3,4);
	ft_bzero2(s2+5,2);
	ft_bzero3(s3+3,4);
	ft_bzero4(s4,4);
	ft_bzero5(s5,4);

	printf("s1 = %s(end)\n",s1);
	printf("s2 = %s(end)\n",s2);
	printf("s3 = %s(end)\n",s3);
	printf("s4 = %s(end)\n",s4);
	printf("s5 = %s(end)\n",s5);

	printf("-----------------------------------\n");

	char s11[]="hello world !!";
	char s22[]="hello world !!";
	char s33[]="hello world !!";
	char s44[]="hello world !!";
	char s55[]="hello world !!";


	bzero(s11+3,4);
	bzero(s22+5,2);
	bzero(s33+3,4);
	bzero(s44,4);
	bzero(s55,4);

	printf("s11 = %s(end)\n",s11);
	printf("s22 = %s(end)\n",s22);
	printf("s33 = %s(end)\n",s33);
	printf("s44 = %s(end)\n",s44);
	printf("s55 = %s(end)\n",s55);


}
