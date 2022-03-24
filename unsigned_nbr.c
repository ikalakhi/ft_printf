/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:27:35 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/22 15:35:17 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_len_numbr(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

int	unsigned_nbr(unsigned int nb)
{
	int	i;
	int	j;

	i = nb;
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	if (nb >= 10)
	{
		unsigned_nbr(nb / 10);
		unsigned_nbr(nb % 10);
	}
	j = ft_len_numbr(i);
	return (j);
}
