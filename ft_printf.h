/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:54:46 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/22 15:21:15 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	printf_leader(va_list s, char d);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_printf_ptr(unsigned long long a);
int	ft_hexnumbr(unsigned int n, char l);
int	unsigned_nbr(unsigned int nb);

#endif
