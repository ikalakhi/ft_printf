/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnumbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:38:16 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/22 14:59:25 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

//this function is for counting how many digits that we have
int	ft_count(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb >= 16)
	{
		i++;
		nb = nb / 16;
	}
	i++;
	return (i);
}

//this function is for printing the numbers with hexadicimal

int	ft_hexnumbr(unsigned int n, char l)
{
	char	*base;
	int		i;
	int		j;

	i = n;
	if (l == 'x')
		base = "0123456789abcdef";
	else if (l == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
	{
		ft_putchar(base[n]);
	}
	else if (n >= 16)
	{
		ft_hexnumbr(n / 16, l);
		ft_hexnumbr(n % 16, l);
	}
	j = ft_count(i);
	return (j);
}
