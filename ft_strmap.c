#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*map;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	map = ft_strnew(ft_strlen(s));
	while (i < ft_strlen(s))
	{
		map[i] = (*f)(s[i]);
		i++;
	}
	return (map);
}
