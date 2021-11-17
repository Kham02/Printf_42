/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:59:23 by estrong           #+#    #+#             */
/*   Updated: 2021/11/15 16:37:54 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(char *str, int *i, va_list ap)
{
	unsigned long long int	p;

	p = va_arg(ap, unsigned long long int);
	ft_putchar(i, '0');
	ft_putchar(i, 'x');
	ft_hex(str, i, p);
}