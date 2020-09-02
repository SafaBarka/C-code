#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *s1, const void *s2, size_t len)
{

	while (len--)
		((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
	
	return s1;
}
char *ft_strdup1(const char *s)
{
	char *copy;

	size_t len;

	len = strlen(s);

	if (!(copy = (char *)malloc(sizeof(char) *(len + 1))))
		return NULL;
	copy = memcpy(copy, s, len + 1) ;

	return copy;
}

char *ft_strdup2(const char *s1)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * strlen(s1) +1);

	if (copy == NULL)
		return NULL;
	
	else
		copy = strcpy(copy, s1);

	return copy;
}

char *ft_strdup3(const char *s)
{
	char *copy ;

	int i ;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (strlen(s) + 1));

	if (copy == NULL)
		return NULL;
	while(s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] ='\0';
	return copy;
}

char *ft_strdup4(const char *s1)
{
	char *s2;

	s2 = (char *)malloc(sizeof(char) * (strlen(s1) +1));

	if (s2 == NULL)
		return NULL;
	strcpy(s2,s1);
	return s2;
}

char *ft_strdup5(const char *s1)
{
	char *dup;

	int index;

	dup = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	
	index = 0;

	if (dup)
	{
		while(s1[index])
		{
			dup[index] =s1[index];
			index++;
		}
		dup[index] ='\0';
	}
	return dup;
}

char *ft_strdup6(const char *src)
{
	int i;

	char *str;

	i = 0;

	while(src[i])
		i++;

	str = (char *)malloc(sizeof(*str) * i + 1);

	if (str == NULL)
		return NULL;

	i = 0;

	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] ='\0';

	return (str);
}
int main()
{
	printf("|%s|\n",ft_strdup6("l"));
}
