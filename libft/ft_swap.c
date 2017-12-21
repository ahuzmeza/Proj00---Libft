/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuzmeza <ahuzmeza@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:37:25 by ahuzmeza          #+#    #+#             */
/*   Updated: 2017/12/11 22:37:27 by ahuzmeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *data1, void *data2, size_t size)
{
	unsigned char	*temp_data;

	temp_data = (unsigned char*)malloc(size * sizeof(unsigned char));
	if (temp_data == NULL)
		return ;
	ft_memmove(temp_data, data1, size);
	ft_memmove(data1, data2, size);
	ft_memmove(data2, temp_data, size);
	free(temp_data);
}
