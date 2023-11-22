/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:09:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/22 12:56:55 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nn;

	if ((long long int)n == LLONG_MIN)
		ft_putstr_fd("-9223372036854775808", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			nn = -((long long int)n);
		}
		else
			nn = (long long int)n;
		if (nn >= 10)
		{
			ft_putnbr_fd(nn / 10, fd);
		}
		ft_putchar_fd((nn % 10) + '0', fd);
	}
}
/*
#include <stdlib.h>
#include <unistd.h>
#include  <stdio.h>

int main(void)
{
//	ft_putnbr_fd(0, 2);
//	printf("\n");
//    ft_putnbr_fd(5, 1);
//	printf("\n");
//    ft_putnbr_fd(-5, 2);
//	printf("\n");
//    ft_putnbr_fd(42, 1);
//	printf("\n");
//    ft_putnbr_fd(-57, 2);
//	printf("\n");
//    ft_putnbr_fd(164189, 1);
//	printf("\n");
	ft_putnbr_fd(-9874441, 2);
	printf("\n");
//	ft_putnbr_fd(2147483647, 1);
//	printf("\n");
//	ft_putnbr_fd(-2147483648LL, 2);
//	printf("\n");
	return (0);
}
*/
