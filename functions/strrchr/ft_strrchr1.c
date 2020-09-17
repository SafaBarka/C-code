#include <string.h>

char *ft_strrchr1(const char *s, int c)
{
	const char cch =(char)c;
	char *s_ret;

	s_ret == NULL;

	while(*s)
	{
		if (*s ==cch)
			s_ret =(char *)s;
		++s;
	}
	if (*s == cch)
		return ((char *)s);
	return s_ret;
}

char *ft_strrchr2(const char *s, int c)
{
	int i;

	i = strlen(s);

	while(i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return NULL;	
}

char *ft_strrchr3(const char *s, int c)
{
	char *ptr;
	char sym;

	ptr = (char *)s +strlen(s);
	sym = (char)c;
	while(ptr >= s)
	{
		if (*ptr == sym)
			return ptr;
		ptr--;
	}
	return NULL;
}

char *ft_strrchr4(const char *s, int c)
{
	if (strchr(s,c) == NULL)
		return NULL;
	while(*s)
		s++;
	while(*s != c)
		s--;
	return ((char *)s);
}

char *ft_strrchr5(const char *s, int c)
{
	int i;
	i = strlen(s);

	while(i >= 0)
	{
		if (s[i] ==(char)c)
			return ((char *)(s + i));
		i--;
	}
	return NULL;
}

char *ft_strrchr6(const char *s, int c)
{
	int i;
	i = (int)strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[i]);
	while(i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return NULL;
}

char *ft_strrchr7(const char *s, int c)
{
	int index;

	index = 0;
	while(s[index])
		index++;
	while(index >= 0)
	{
		if(s[index] == c)
			return ((char *)s + index);
		index--;
	}
	return NULL;
}

char *ft_strrchr8(const char *s, int c)
{
	int j;

	char *str;
	
	str = (char *)s;

	j = strlen(str);

	if ((char)c == '\0')
		return (&str[j]);

	while(j > 0)
	{
		j--;
		if (str[j] == (char)c)
			return (&str[j]);
	}
	return NULL;
}

char *ft_strrchr(const char *s, int c)
{
	char *np;
	int i;

	np = (char *)s;
	i =(int)strlen(np);

	while(i >= 0)
	{
		if (np[i] == (char)c)
			return (np + i);
		i--;
	}
	return NULL;
}

int main()
{

}
