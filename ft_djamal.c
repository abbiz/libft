#include "libft.h"

int		ft_djamal(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i >= k && i <= j))
		return (i);
	if ((j >= i && j <= k) || (j >= k && j <= i))
		return (j);
	if ((k >= j && k <= i) || (k >= i && k <= j))
		return (k);
	return (0);
}
