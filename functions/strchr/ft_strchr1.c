#include <string.h>

char *ft_strchr1(const char *s, int c)
{
	int i;
	char *str;

	i = 0;
	str = (char *)s;

	if (str ==NULL)
		return NULL;
	while(str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return NULL;
}

char *ft_strchr2(const char *s, int c)
{
	int index;

	index = 0;

	while (s[index])
	{
		if (s[index] == c)
			return ((char *)s + index);
		index++;
	}
	if (c == '\0')
		return ((char *)s + index);
	return NULL;
}

char *ft_strchr3(const char *s, int c)
{
	while (*s!= c)
	{
		if (!(*s))
			return NULL;
		s++;
	}
	return ((char *)s);
}

char *ft_strchr4(const char *s, int c)
{
	int i;

	i = 0;

	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] ==(char)c)
		return ((char *)(s + i));
	return NULL;
}

char *ft_strchr5(const char *s, int c)
{
	while(*s && *s != c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return NULL;
}

char *ft_strchr6(const char *s, int c)
{
	char *ptr;
	char sym;

	ptr = (char *)s;
	sym =(char)c;

	while (*ptr && !(*ptr == sym))
		ptr++;
	return ((*ptr == sym) ? ptr : NULL);
}

char *ft_strchr7(const char *s, int c)
{
	unsigned int i;

	i = 0;

	while(s[i])
	{
		if(s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char )c)
		return ((char *)s + i);
	return NULL;
}

char *ft_strchr(const char *s, int c)
{
	char *np;

	np = (char *)s;

	if (c == '\0')
		return (np + strlen(np));
	while(*np != c && *np != '\0')
		*np++;
	if(*np == '\0')
		return NULL;
	return (np);
}

int main()
{

}
