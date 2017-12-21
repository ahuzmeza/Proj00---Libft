/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuzmeza <ahuzmeza@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 23:17:41 by ahuzmeza          #+#    #+#             */
/*   Updated: 2017/12/11 23:19:23 by ahuzmeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int p;
	int last_digit;

	last_digit = n % 10;
	n /= 10;
	if (last_digit < 0 || n < 0)
	{
		ft_putchar('-');
		n = -n;
		last_digit = -last_digit;
	}
	if (n != 0)
	{
		p = 1;
		while (p * 10 <= n)
			p *= 10;
		while (p != 0)
		{
			ft_putchar(n / p % 10 + '0');
			p /= 10;
		}
	}
	ft_putchar(last_digit + '0');
}
