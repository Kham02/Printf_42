#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(int *i, char c)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_c(int *i, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	ft_putchar(i, c);
}

void	ft_check(int *i, char *str, va_list ap)
{
	if (*str == 'c')
		ft_c(i, ap);
	// else if (*str == 's')
	// 	ft_s(str, i, ap);
	// else if (*str == 'p')
	// 	ft_p(str, i, ap);
	// if (*str == 'd' || *str == 'i')
	// 	ft_di(i, ap);
	// else if (*str == 'u')
	// 	ft_u(i, ap);
	// else if (*str == 'x' || *str == 'X')
	// 	ft_xX(str, i, ap);
	// else
// 		// ft_putchar(i, *str);
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
	printf("%d", i);
	return (i);
}

int	main(void)
{
	char	c;

	c = 'z';
	printf("%c\n", c);
	ft_printf("HHHHHHHHHHH ____ - %c\n", c);
	return (0);
}
