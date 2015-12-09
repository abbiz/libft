#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s != NULL)
	{
		if ((str = ft_strnew(len)) == NULL)
			return (NULL);
		else
			return (ft_strncpy(str, s + start, len));
	}
	return (NULL);
}
