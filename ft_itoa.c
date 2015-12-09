#include "libft.h"

static int	len_itoa(int n)
{
	int		res;

	res = 1;
	while (n <= -10 || n >= 10)
	{
		res++;
		n = n / 10;
	}
	if (n >= 0)
		return (res);
	else
		return (res + 1);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		neg;

	if (n < 0)
		neg = 1;
	else
		neg = 0;
	i = len_itoa(n);
	str = (char *)ft_memalloc(sizeof(char) * i + 1);
	while (i-- != 0)
	{
		if (n < 0)
			str[i] = (((n % 10) * -1) + '0');
		else
			str[i] = ((n % 10) + '0');
		n = n / 10;
	}
	if (neg != 0)
		str[0] = '-';
	return (str);
}
