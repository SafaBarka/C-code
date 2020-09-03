
#include <ctype.h>

int ft_isalnum1(int c)
{
	return (isalpha(c) || isdigit(c));
}

int ft_isalnum2(int c)
{
	if (isalpha(c) || isdigit(c))
		return 1;
	return 0;
}

int ft_isalnum3(int c)
{
	if (isalpha(c) == 1 || isdigit(c) == 1)
		return 1;
	else
		return 0;
}

int ft_isalnum4(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <=57))
		return 1;
	return 0;
}

int ft_isalnum5(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ? 1 : 0 );
}

int main()
{

}

