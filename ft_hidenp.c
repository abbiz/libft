#include "libft.h"

void	ft_hidenp(char *str1, char *str2)
{
	size_t	a;
	size_t	i;
	size_t	j;

	a = 0;
	i = 0;
	j = 0;
	while (str2[j] != '\0')
		if (str2[j] == str1[i])
		{
			a++;
			i++;
			j++;
		}
		else
			j++;
	if (a == ft_strlen(str1))
		ft_putchar('1');
	else
		ft_putchar('0');
}
