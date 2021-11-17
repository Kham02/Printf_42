/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:57:56 by estrong           #+#    #+#             */
/*   Updated: 2021/11/15 18:05:03 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_check(int *i, char *str, va_list ap);
void	ft_c(int *i, va_list ap);
void	ft_di(int *i, va_list ap);
void	ft_p(char *str, int *i, va_list ap);
void	ft_s(char *str, int *i, va_list ap);
void	ft_u(int *i, va_list ap);
void	ft_xX(char *str, int *i, va_list ap);

void    ft_putchar(int *i, char c);
void    ft_nbr(int *i, int n);
void	ft_u_nbr(int *i, unsigned int n);
void	ft_hex(char *str, int *i, unsigned long int n);

#endif