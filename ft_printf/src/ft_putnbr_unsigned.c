/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:22:24 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/11 09:51:18 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	len;
	int	nn;

	nn = 1;
	len = 0;
	if (n >= 10)
		len += ft_putnbr_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', nn);
	len += 1;
	return (len);
}
