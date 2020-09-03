#include <string.h>

#include <stdio.h>

char *ft_strcpy1(char *dst, const char *src)
{
	size_t i;

	i = 0;

	while(src[i])
	{
		dst[i] = src[i];

		i++;
	}
	dst[i] = '\0';

	return dst;
}

char *ft_strcpy2(char *dst, const char *src)
{
	size_t len;

	len = strlen(src);

	dst = memcpy((void *)dst ,(const void *)src, len + 1);

	return dst;
}

char *ft_strcpy3(char *dst, const char *src)
{
	int i;

	i = 0;

	if (dst && src)
	{
		while(src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] ='\0';
	}
	return dst;
}

char *ft_strcpy5(char *dst, const char *src)
{
	int i;

	i = -1;

	while(src[++i] != '\0')
		dst[i] = src[i];

	dst[i] ='\0';

	return dst;
}

char *ft_strcpy6(char *dst, const char *src)
{
	char *pdst;

	pdst = dst;

	while (*src)
		*pdst++ = *src++;

	*pdst ='\0';

	return dst;
}

int main(){


}
