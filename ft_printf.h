/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:38:27 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/28 20:53:14 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define UPPER_CASE "0123456789ABCDEF"
# define LOWER_CASE "0123456789abcdef"
# define BASE16 16
# define BASE10 10

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n, int base);
int	ft_puthex(int n, char c);
int	ft_putunsnbr(unsigned int n);
int	ft_putpoint(void *address);

#endif