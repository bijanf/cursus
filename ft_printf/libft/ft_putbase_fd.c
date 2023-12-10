/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:37:27 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/09 23:39:41 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbase_fd(int nbr, const char *base, int fd)
{
	int		base_len;
	long	nb;
	char	c;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long)nbr);
	}
	else
		nb = (long)nbr;
	if (nb > (base_len - 1))
		ft_putbase_fd(nb / base_len, base, fd);
	c = *(base + (nb % base_len));
	write(fd, &c, 1);
}
