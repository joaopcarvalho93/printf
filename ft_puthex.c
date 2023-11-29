/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:55:24 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/28 20:51:40 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n, char c)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (nb < BASE16)
	{
		if (c == 'x')
		{
			count += ft_putchar(LOWER_CASE[nb]);
		}
		else if (c == 'X')
			count += ft_putchar(UPPER_CASE[nb]);
	}
	else
	{
		count += ft_puthex(nb / BASE16, c);
		count += ft_puthex(nb % BASE16, c);
	}
	return (count);
}
