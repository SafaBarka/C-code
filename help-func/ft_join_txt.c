#include "../cub3d.h"

char	*ft_join_txt(char **s1, char **s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (*s1 == NULL || *s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(*s1) + ft_strlen(*s2)
						+ 2))))
		return (NULL);
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	str[i] = ' ';
	i++;
	while ((*s2)[j] != '\0')
	{
		str[i] = (*s2)[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}