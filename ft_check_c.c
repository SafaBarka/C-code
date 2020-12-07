#include "cub3d.h"
void	ft_err_c(char **str)
{
	if (g_c.c != -1)
		ft_err("redefining variable 'C' in file");
	if (ft_nbr_split(str) != 2)
		ft_err("'C' parameters are not valid");
}
void	ft_set_c(char *str)
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
	g_c.c = ft_create_trgb(0, r, g, b);
	ft_free_d(color);
}

void	ft_check_c(char **str)
{
	ft_err_c(str);
	ft_set_c(str[1]);
}
