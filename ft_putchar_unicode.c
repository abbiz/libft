/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_unicode.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 07:39:16 by abizeau           #+#    #+#             */
/*   Updated: 2016/08/25 07:55:22 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		main(void)
{
	ft_putchar('é');
	return (0);
}

/*
int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_putchar(argv[1]);
	return (0);
}*/
