#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (s == 0 || n == 0)
		return (NULL);
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
