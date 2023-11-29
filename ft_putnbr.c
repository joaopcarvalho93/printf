/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:46:18 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/28 20:41:03 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, int base)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count += ft_putchar('-');
	}
	if (n < base)
	{
		count += ft_putchar(n + '0');
	}
	else
	{
		count += ft_putnbr(n / base, base) + ft_putnbr(n % base, base);
	}
	return (count);
}
