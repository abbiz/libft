#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (s == NULL || s[0] == '\0')
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > i)
		j--;
	str = ft_strsub(s, i, j - i + 1);
	return (str);
}
