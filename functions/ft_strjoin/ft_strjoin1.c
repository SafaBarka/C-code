
#include <stdlib.h>
#include <string.h>

char *ft_strjoin1(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j; 
	int len;

	i = 0 ;
	j = 0;

	if (!s1 || !s2)
		return NULL;
	len = strlen(s1) + strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return NULL;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while(s2[j] != '\0')
	{
		str[j + i]=s2[j];
		j++;
	}
	str[j + i] ='\0';

	return str;
}

char *ft_strjoin2(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	if (!s1 || !s2)
		return NULL;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(str = (char *)malloc(sizeof(char) * (i + j + 1))))
		return NULL;
	i = -1;
	while(s1[++i])
		str[i] = s1[i];
	j = -1;
	while(s2[++j])
		str[i++] =s2[j];
	str[i] = '\0';

	return (str);
}

char *ft_strjoin3(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	if (!s1 && !s2)
		return NULL;
	if (!s1)
		return strdup(s1);
	if (!s2)
		return strdup(s2);
	str = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) +1));
	if (!str)
		return NULL;
	i = -1;
	while (s1[++i])
		str[i]=s1[i];
	j = -1;
	while(s2[++j])
		str[i++] = s2[j];
	str[i]= '\0';
	return str;
}

char *ft_strjoin4(char const *s1, char const *s2)
{
	char *str;

	size_t len_s1;
	size_t len_s2;
	size_t i;

	if (s1 == NULL || s2 == NULL)
		return NULL;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	str = (char *)malloc((len_s1 + len_s2)*sizeof(char));

	if (str == NULL)
		return NULL;
	i = 0;
	while(i < len_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while(i - len_s1 < len_s2)
	{
		str[i] = s2[i -len_s1];
		i++;
	}
	str[i] = '\0';
	return str;
}

char *ft_strjoin5(char const *s1, char const *s2)
{
	char *str;
	size_t len1;
	size_t len2;

	if (!s1 && !s2)
		return NULL;
	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	if ((str = (char *)malloc(sizeof(char) * (len1 + strlen(s2) + 1))) == NULL)
		return NULL;
	(len1 == 0)? str :strcpy(str,s1);
	(len2 == 0)? str : strcpy((str + len1),s2);
	return str;
}

char *ft_strjoin6(char const *s1, char const *s2)
{
	char *result;
	char *start;

	if (!s1 && !s2)
		return NULL;
	result = (char *)malloc(sizeof(char) * (strlen(s1) +strlen(s2) +1));
	if (start = result)
	{
		if (s1)
			while(*s1)
				*result++ = *s1++;
		if (s2)
			while(*s2)
				*result++ = *s2++;
		*result = '\0';
	}
	return start;
}

char *ft_strjoin7(char const *s1, char const *s2)
{
	char *sptr;
	int index;

	if (!s1 || !s2)
		return NULL;
	if (!(sptr = (char *)malloc(sizeof(char) * (strlen(s1) +strlen(s2) +1))))
		return NULL;
	index = 0;
	while(*s1)
	{
		sptr[index] = *s1;
		++s1;
		++index;
	}
	while(*s2)
	{
		sptr[index] =*s2;
		++s2;
		++index;
	}
	sptr[index]= '\0';
	return sptr;

}
int main()
{

}
