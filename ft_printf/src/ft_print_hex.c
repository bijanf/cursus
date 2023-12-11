/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:41:21 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/11 09:50:55 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static int	ft_hexlen(uintptr_t num)
{
	int	l;

	l = 0;
	while (num != 0)
	{
		num /= 16;
		l++;
	}
	return (l);
}

static void	ft_puthex(uintptr_t num, const char format)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, format);
		ft_puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else if (format == 'x')
			ft_putchar(num - 10 + 'a');
		else if (format == 'X')
			ft_putchar(num - 10 + 'A');
	}
}

int	ft_print_hex(const char format, unsigned int args)
{
	int	l;

	l = 0;
	if (args == 0)
		l += write(1, "0", 1);
	else
	{
		ft_puthex(args, format);
		l += ft_hexlen(args);
	}
	return (l);
}
