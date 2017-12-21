/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuzmeza <ahuzmeza@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:49:29 by ahuzmeza          #+#    #+#             */
/*   Updated: 2017/12/12 11:40:04 by ahuzmeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int len_l;
	int len_b;
	int i;
	int j;

	if (*little == '\0')
		return ((char*)big);
	len_l = ft_strlen(little);
	len_b = ft_strlen(big);
	i = 0;
	while (i <= len_b - len_l)
	{
		j = 0;
		while (j < len_l && big[i + j] == little[j])
			j++;
		if (j == len_l)
			return ((char*)(big + i));
		i++;
	}
	return (NULL);
}
