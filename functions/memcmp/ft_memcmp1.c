#include <stdio.h>

#include <string.h>

int ft_memcmp1(const void *s1, const void *s2, size_t n)
{
	unsigned char *s11;

	unsigned char *s22;

	s11 =(unsigned char *)s1;

	s22 =(unsigned char *)s2;

	while (n--)
	{
		if (*s11 != *s22)
			return (*s11 - *s22);
		s11++;
		s22++;
	}
	return (0);
}

int ft_memcmp2(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;

	unsigned char *p2;

	p1 = (unsigned char *)s1;

	p2 = (unsigned char *)s2;

	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;

		p2++;

		n--;
	}
	return (0);
}

int ft_memcmp3(const void *s1, const void *s2, size_t n)
{
	size_t i;

	unsigned char *p1;

	unsigned char *p2;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;

		p1 = (unsigned char *)s1;

		p2 = (unsigned char *)s2;

		while (i < n)
		{
			if (p1[i] != p2[i])
				return (p1[i] - p2[i]);
			i++;
		}
	}
	return (0);
}

int ft_memcmp4(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;

	unsigned char *p2;

	if (s1 == s2)
		return (0);
	p1 = (unsigned char *)s1;

	p2 = (unsigned char *)s2;

	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;

	}
	return (0);
}

int ft_memcmp5(const void *s1, const void *s2, size_t n)
{
	size_t i;

	unsigned char *p1;

	unsigned char *p2;

	i = 0 ;

	p1 = (unsigned char *)s1;

	p2 = (unsigned char *)s2;

	if (s1 && s2 )
	{
		while (p1[i] == p2[i] && i < n)
			i++;
		if (i < n)
			return (p1[i] - p2[i]);
	}
	return (0);
}

int ft_memcmp6(const void *s1, const void *s2, size_t n)
{
	size_t index ;

	index = 0;

	while (index < n)
	{
		if (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index])
			return ( ((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
	}
	return (0);
}


int main(){

}
