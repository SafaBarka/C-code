#include <ctype.h>

int ft_isalpha1(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 :0);
}

int ft_isalpha2(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int ft_isalpha3(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isalpha4(int c)
{
	if (isupper(c) || islower(c))
		return 1;
	return 0;
}

int ft_isalpha5(int c)
{
	return (islower(c) || isupper(c));
}
#include <stdio.h>
int main()
{
	printf("%d\n",ft_isalpha5('\0'));

}
