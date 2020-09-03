
int ft_isdigit1(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isdigit2(int c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int ft_isdigit3(int c)
{
	if (c >= 48 && c <= 57)
		return 1;
	return 0;
}

int ft_isdigit4(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

int main()
{

}
