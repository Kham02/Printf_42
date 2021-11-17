/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliary_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:57:47 by estrong           #+#    #+#             */
/*   Updated: 2021/11/15 18:19:55 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int *i, char c)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_nbr(int *i, int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*i) += 11;
		return;
	}
	if (n < 0)
	{
		ft_putchar(i, '-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_nbr(i, n / 10);
		ft_nbr(i, n % 10);
	}
	else
		ft_putchar(i, (n % 10) + '0');
}

void	ft_u_nbr(int *i, unsigned int n)
{
	if (n >= 10)
	{
		ft_u_nbr(i, n / 10);
		ft_u_nbr(i, n % 10);
	}
	else
		ft_putchar(i, n + '0');
}

void	ft_hex(char *str, int *i, unsigned long int n)
{
	if (n >= 16)
	{
		ft_hex(str, i, n / 16);
		n %= 16;
	}
	if (n > 9 && n < 16)
	{
		if (*str == 'x' || *str == 'p')
			ft_putchar(i, n % 10 + 97);
		else
			ft_putchar(i, n % 10 + 65);
	}
	else
		ft_putchar(i, n + '0');
}

