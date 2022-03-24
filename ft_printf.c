/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:07:47 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/22 15:09:38 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		l;
	va_list	args;

	va_start (args, s);
	i = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			l += printf_leader(args, s[i + 1]);
			i++;
		}
		else if (s[i] != '%')
		{
			write (1, &s[i], 1);
			l++;
		}
		i++;
	}
	va_end(args);
	return (l);
}