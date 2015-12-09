/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:00:37 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:00:39 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
