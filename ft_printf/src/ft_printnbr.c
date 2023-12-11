/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:18:44 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/11 09:51:13 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int	ft_printnbr(int n)
{
	char	*c;
	int		len;
	int		nn;

	nn = 1;
	c = ft_itoa(n);
	len = ft_strlen(c);
	ft_putnbr_fd(n, nn);
	free(c);
	return (len);
}
