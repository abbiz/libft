#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		res = (char *)(s + i);
	return (res);
}
