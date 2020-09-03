int ft_isascii1(int c)
{
	return (c >= 0 && c <= 127);
}

int ft_isascii2(int c)
{
	if (c >= 0 && c<=127)
		return 1;
	return 0;
}

int ft_isascii3(int c)
{
	return (c >= 0 && c < 128);
}

int ft_isascii4(int c)
{

	if (c >= 0 && c <= 0177)//(0177 is 128 decimal)
		return 1;
	else
		return 0;
}

int ft_isascii5(int c)
{
	return ((c >= 0 && c <=127) ? 1 : 0);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("%d\n",ft_isascii5(128));
}
