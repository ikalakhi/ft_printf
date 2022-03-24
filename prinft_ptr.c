/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinft_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:54:34 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/22 15:35:55 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long num)
{
	char	*base;

	base = "0123456789abcdef";
	if (num < 16)
		ft_putchar(base[num]);
	else
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
}

int	ft_printf_ptr(unsigned long long a)
{
	int	l;

	l = 0;
	l += write(1, "0x", 2);
	if (a == 0)
		l += write(1, "0", 1);
	else if (a > 0)
	{
		ft_put_ptr(a);
		l += ft_len(a);
	}
	return (l);
}
