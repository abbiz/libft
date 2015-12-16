/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:55:41 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/16 16:56:45 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while ((*alst)->next != NULL && *alst != '\0' && del != NULL)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		free(*alst);
		*alst = tmp;
	}
	*alst = NULL;
}
