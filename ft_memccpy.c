#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((char *)src)[i] == c)
			return ((char *)dst) + i + 1;
		i++;
	}
	return (NULL);
}
