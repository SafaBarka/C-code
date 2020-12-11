#include "cub3d.h"

int ft_nbr_comma(char *s)
{

	int i = 0;
	int sum = 0;
	while (s[i])
	{
		if (s[i] == ',')
			sum++;
		i++;
	}
	return sum;
}
void	ft_check_c()
{
	char *trim;
	char **color;
	int		r;
	int		g;
	int     b;
	char	*tmp1;
	g_c.nbrv++;
	if (g_c.c != -1)
		ft_err("redefining variable 'C' in file");
	if(!(trim = ft_strtrim(g_c.line + 1," ")))
		ft_err("memory problem");
	if (ft_nbr_comma(g_c.line +1) != 2)
		ft_err("invalid parameters for ceiling color");
	if(!(color = ft_split(trim,',')))
		ft_err("mmeory problem");
	if (ft_nbr_split(color) != 3)
		ft_err("ceiling color nbr  parameters are not valid");
	tmp1 = (char *)ft_strtrim(color[0]," ");
	if (ft_is_number(tmp1) == 0)
		ft_err("ceiling color is not valid arg1");
	r = ft_atoi(tmp1);
	free(tmp1);
	tmp1 = (char *)ft_strtrim(color[1]," ");
	if ( ft_is_number(tmp1) == 0)
		ft_err("ceiling color is not valid arg2");
	g = ft_atoi(tmp1);
	free(tmp1);
	tmp1 = (char *)ft_strtrim(color[2]," ");
	if ( ft_is_number(tmp1) == 0)
		ft_err("ceiling color is not valid arg3");
	b = ft_atoi(tmp1);
	free(tmp1);
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		ft_err("something wrong with ceiling color");
	g_c.c = ft_create_trgb(0, r, g, b);
	ft_free_d(color);
	free(trim);
}
