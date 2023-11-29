/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:21:42 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/28 21:03:23 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexpoint(long n)
{
	int				count;
	unsigned long	nb;

	count = 0;
	nb = n;
	if (nb < BASE16)
	{
		count += ft_putchar(LOWER_CASE[nb]);
	}
	else
	{
		count += ft_puthexpoint(nb / BASE16);
		count += ft_puthexpoint(nb % BASE16);
	}
	return (count);
}

int	ft_putpoint(void *address)
{
	int	count;

	count = 0;
	if (!address)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	else
	{
		write(1, "0x", 2);
		count += ft_puthexpoint((long)address);
	}
	return (count + 2);
}
