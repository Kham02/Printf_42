/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:50:58 by estrong           #+#    #+#             */
/*   Updated: 2021/11/15 16:58:39 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(int *i, char *str, va_list ap)
{
	if (*str == 'c')
		ft_c(i, ap);
	else if (*str == 's')
		ft_s(str, i, ap);
	else if (*str == 'p')
		ft_p(str, i, ap);
	else if (*str == 'd' || *str == 'i')
		ft_di(i, ap);
	else if (*str == 'u')
		ft_u(i, ap);
	else if (*str == 'x' || *str == 'X')
		ft_xX(str, i, ap);
	else
		ft_putchar(i, *str);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check(&i, (char *)str, ap);
			str++;
		}
		else
			ft_putchar(&i, *str++);
	}
	va_end(ap);
	return (i);
}
