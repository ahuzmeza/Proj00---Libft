/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuzmeza <ahuzmeza@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 12:41:57 by ahuzmeza          #+#    #+#             */
/*   Updated: 2017/12/15 12:49:29 by ahuzmeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrsplit(char const *str, char c)
{
	char **p;

	p = ft_strsplit(str, c);
	while (*p)
		ft_putendl(*p++);
}
