/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarret <ancarret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:22:34 by ancarret          #+#    #+#             */
/*   Updated: 2025/01/31 12:21:28 by ancarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar('%') + ft_putchar(format));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;	
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			length += ft_putchar(format[i]);
		else
		{
			if (format[i + 1] != '\0')
				i++;
			length += check_format(format[i], args);
		}
		i++;
	}
	va_end(args);
	return (length);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%");
	ft_printf("%");
	return (0);
}
*/