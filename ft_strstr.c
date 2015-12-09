/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:11:59 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:12:00 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (big[i] != '\0')
	{
		if (little[j] == '\0')
			return ((char *)big + i - j);
		if (little[j] == big[i])
			j++;
		else
			j = 0;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)big + i - j);
	return (NULL);
}
