#include "libft.h"

void	ft_swap(int *a, int *b)
{
	size_t	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
