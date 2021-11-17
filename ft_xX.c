/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xX.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:58:09 by estrong           #+#    #+#             */
/*   Updated: 2021/11/15 18:02:28 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xX(char *str, int *i, va_list ap)
{
	unsigned int	x;

	x = va_arg(ap, unsigned int);
	ft_hex(str, i, x);
}