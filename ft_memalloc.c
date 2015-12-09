#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	mem = (char *)malloc(sizeof(char) * size);
	if (mem == 0)
		return (NULL);
	ft_bzero((void*)mem, size);
	return ((void *)mem);
}
