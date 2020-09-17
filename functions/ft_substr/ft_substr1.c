#include <stdlib.h>
#include <string.h>

char *ft_substr1(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;

	i = 0;

	if (!s)
		return NULL;
	
	sub = (char *)malloc(sizeof(char) *(len + 1));

	if (sub == NULL)
		return NULL;
	while (i != len)
	{
		sub[i]=s[i + start];
		i++;
	}
	sub[i] = '\0';

	return sub;
}

char *ft_substr2(char const *s, unsigned int start, size_t len)
{
	char *sub;

	size_t index;

	if (!s)
		return NULL;

	sub = (char *)malloc(sizeof(*sub) * (len + 1));

	index = 0;

	if (sub)
	{
		while(index < len)
			sub[index++]=s[start++];
		
		sub[index]='\0';

		return sub;
	}
	return NULL;
}

char *ft_substr3(char const *s, unsigned int start, size_t len)
{
	char *str;

	size_t i;

	if (!s || !(*s) || !len)
		return NULL;
	str= (char *)malloc(sizeof(char) * (len +1));

	if (!str)
		return NULL;
	i = -1;
	while(++i < len && s[start])
		str[i] = s[start + i];
	return str;
}

char *ft_substr4(char const *s, unsigned int start, size_t len)
{
	char *str;

	size_t i;

	if (s == NULL)
		return NULL;
	str= (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return NULL;
	i = 0;

	while (i < len)
	{
		str[i]=s[start + i];
		i++;
	}
	str[i]='\0';
	return str;

}

char *ft_substr5(char const *s, unsigned int start, size_t len)
{

	char *str;

	unsigned int i;

	if ((str = (char *)malloc(sizeof(char ) * (len + 1))) == NULL)
		return NULL;

	i = 0;
	while(len--)
		str[i++] = s[start++];
	str[i] ='\0';
	return str;
}

char *ft_substr6(char const *s, unsigned int start,size_t len)
{
	char *str;

	size_t i;

	i = 0;

	if (!s || start + len > strlen(s))
		return NULL;
	if ((str= (char *)malloc(sizeof(char) * (len +1))))
	{
		while(len)
		{
			str[i++] =s[start++];
			len--;
		}
		str[i] ='\0';
	}
	return str;
}

char *ft_substr7(char const *s, unsigned int start, size_t len)
{
	char *sub;
	
	unsigned int i;

	i = 0;

	if (!s || !(sub = (char *)malloc(sizeof(char) * (len +1))))
		return NULL;

	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return sub;
}

char *ft_substr8(char const *s, unsigned int start, size_t len)
{
	char *str;

	int index;

	if (!s)
		return NULL;
	if (!(str = (char *)malloc(sizeof(char) * (len +1))))
		return NULL;

	index = 0;
	while(len - index)
	{
		str[index] =s[start + index];
		++index;
	}
	str[index] ='\0';
	return str;
}

//bad one
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t j;

	j = 0;

	if (s == NULL)
		return NULL;
	else if (start >= strlen((char *)s))
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return NULL;
	else
	{
		i = (size_t)start;
		while(i < (len + start))
		{
			str[j]=((char *)s)[i];
			i++;
			j++;
		}
	}
	str[j]='\0';
	return str;
}
int main()
{


}
