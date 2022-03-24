/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinft_leader.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:20:07 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/22 15:20:58 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	printf_leader(va_list s, char d)
{
	int	i;

	i = 0;
	if (d == 'c')
		i = ft_putchar(va_arg(s, int));
	else if (d == 's')
		i = ft_putstr(va_arg(s, char *));
	else if (d == 'd' || d == 'i')
		i = ft_putnbr(va_arg(s, int));
	else if (d == 'u')
		i = unsigned_nbr(va_arg(s, unsigned int));
	else if (d == 'x' || d == 'X')
		i = ft_hexnumbr(va_arg(s, unsigned int), d);
	else if (d == '%')
		i = ft_putchar(d);
	if (d == 'p')
		i = ft_printf_ptr(va_arg(s, unsigned long long));
	return (i);
}
