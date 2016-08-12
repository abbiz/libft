/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:56:05 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/16 16:57:15 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*dest;

	dest = NULL;
	if (lst != NULL)
		dest = ft_lstnew(lst->content, lst->content_size);
	if (dest == NULL)
		return (NULL);
	dest = f(dest);
	if (lst->next)
		dest->next = ft_lstmap(lst->next, f);
	return (dest);
}
