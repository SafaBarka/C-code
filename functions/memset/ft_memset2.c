#include <stdio.h>
#include <string.h>


void *ft_memset1(void *s, int c, size_t len){

	unsigned char *str;

	size_t i;

	str = (unsigned char *)s;

	i = 0 ;

	while (i < len)
		str[i++] = (unsigned char)c;
	return (s);
}

void *ft_memset2(void *s, int c, size_t len){

	unsigned char *str;

	str = (unsigned char *)s;

	while (len--)
		*str++ =(unsigned char)c;
	
	return (s);
}

void *ft_memset3(void *s, int c, size_t len){
	size_t i;

	char *str;

	unsigned char ch;

	i = 0 ;

	str =(char *)s;

	ch = (unsigned char)c;

	while(len > 0){
		str[i] = ch;
		i++;
		len--;
	}

	return s;
}

void *ft_memset4(void *s ,int c,size_t len){
	while(len)
		((char *)s)[--len] = (unsigned char)c;
	return s;
}

void *ft_memset5(void *s, int c, size_t len){
	unsigned int i;

	unsigned char *str;

	i = 0 ;
	
	str = (unsigned char *)s;

	while (i < len)
		str[i++]=(unsigned char)c;

	s = (void *)str;

	return s;
		
}

void *ft_memset6(void *s, int c, size_t len){

	unsigned char *str;

	unsigned char ch;

	str = (unsigned char *)s;

	ch = (unsigned char)c;

	while(len--)
		*str++ =ch;
	return s;
}

void *ft_memset(void *s, int c, size_t len)
{
	while (len--)
		*((unsigned char *)s++) =(unsigned char) c;
	return s;

}

void print(char *s ,int n)
{
	for(int i = 0; i < n ; i++){
		printf("%c ",*(s+i));
	}
	printf("\n");
}
int main(){
	
	char s1[]= "hello world;";
	char s2[]= "hello world;";
	char s3[]= "hello world;";
	char s4[]= "hello world;";
	char s5[]= "hello world;";
	char s6[]= "hello world;";
        char s[]	= "hello world;";
	
	//we get segmentation fault if we use (char *s1 ="hello world;")
	ft_memset1(s1+2,'.',3);
	ft_memset2(s2+2,'.',3);
	ft_memset3(s3+2,'.',3);
	ft_memset4(s4+2,'.',3);
	ft_memset5(s5+2,'.',3);
	ft_memset6(s6+2,'.',3);
	ft_memset(s+2,'.',3);

	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
	printf("%s\n",s4);
	printf("%s\n",s5);
	printf("%s\n",s6);
	printf("%s\n",s);

	printf("----------------------------------------\n");

	ft_memset1(s1,0,3);
	ft_memset2(s2,0,3);
	ft_memset3(s3,0,3);
	ft_memset4(s4,0,3);
	ft_memset5(s5,0,3);
	ft_memset6(s6,0,3);
	ft_memset(s,0,3);

	print(s1,11);
	print(s2,11);
	print(s3,11);
	print(s4,11);
	print(s5,11);
	print(s6,11);
	print(s,11);

	printf("-----------------------------------------\n");

	ft_memset1(s1,1,3);
	ft_memset2(s2,1,3);
	ft_memset3(s3,1,3);
	ft_memset4(s4,1,3);
	ft_memset5(s5,1,3);
	ft_memset6(s6,1,3);
	ft_memset(s,1,3);

	print(s1,11);
	print(s2,11);
	print(s3,11);
	print(s4,11);
	print(s5,11);
	print(s6,11);
	print(s,11);



}
