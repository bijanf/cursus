/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:10:00 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/10 18:07:01 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	printing(const char format, va_list args)
{
	int	cnt;
	int	nn;

	cnt = 1;
	nn = 1;
	if (format == 'c')
		ft_putchar_fd(va_arg(args, int), nn);
	else if (format == 's')
		cnt = print_string(va_arg(args, char *));
	else if (format == 'p')
		cnt = ft_print_fp(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		cnt = ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		cnt = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		cnt = ft_print_hex(format, va_arg(args, uintptr_t));
	else if (format == '%')
		write(1, "%%", 1);
	else
		write(1, &format, 1);
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			count += printing(format[i + 1], args);
			i++;
		}
		else
		{
			count++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
