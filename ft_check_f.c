
#include "cub3d.h"
void	ft_set_f(char *str)
{
	char	**color;
	int		r;
	int		g;
	int		b;

	g_c.nbrv++;
	if (!(color = ft_split(str, ',')))
		ft_err("memory problem");
	if (ft_nbr_split(color) != 3)
		ft_err("something wrong with floor color");
	if (ft_is_number(color[0]) == 0 || ft_is_number(color[1]) == 0
		|| ft_is_number(color[2]) == 0)
		ft_err("something wrong with floor color");
	r = ft_atoi(color[0]);
	g = ft_atoi(color[1]);
	b = ft_atoi(color[2]);
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		ft_err("something wrong with floor color");
	g_c.f = ft_create_trgb(0, r, g, b);
	ft_free_d(color);
}

void	ft_err_f(char **str)
{
	if (g_c.f != -1)
		ft_err("redefining variable 'F' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'F' parameters are not valid");
}

void	ft_check_f(char **str)
{
	ft_err_f(str);
	ft_set_f(str[1]);
}


int		ft_create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}



