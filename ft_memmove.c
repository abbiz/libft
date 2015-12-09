#include "libft.h"


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = ft_memalloc(len);
	if (tmp == 0)
		return (NULL);
	ft_memcpy(tmp, src, len);
	while (i < len)
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dst);
}
