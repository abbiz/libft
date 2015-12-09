#include "libft.h"

int	ft_isspace(int c)
{
	if (c == (int)' ' || (c >= (int)'\t' && c <= (int)'\r'))
		return (1);
	else
		return (0);
}
