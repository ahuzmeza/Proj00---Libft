/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuzmeza <ahuzmeza@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:35:10 by ahuzmeza          #+#    #+#             */
/*   Updated: 2017/12/11 22:35:25 by ahuzmeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char *str)
{
	int c;
	int i;

	if (str == NULL || str[0] == '\0')
		return (0);
	c = 0;
	if (!ft_isspace(str[0]))
		c = 1;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i - 1]) && !ft_isspace(str[i]))
			c++;
		i++;
	}
	return (c);
}
