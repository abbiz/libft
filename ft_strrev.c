/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:59:38 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/16 16:59:40 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	*str2;

	i = 0;
	j = ft_strlen(str);
	str2 = str;
	while (j != 0)
	{
		str[i] = str2[j];
		i++;
		j--;
	}
	ft_putstr(str);
}
