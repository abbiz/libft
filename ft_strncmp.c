#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (n > i)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}