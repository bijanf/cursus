/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:14:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 09:59:00 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char *) s)[i])
		{
			s = s + i;
			return ((unsigned char *) s);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    //char str[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    //char *pos = memchr(str, 'z', 7);
	printf("%s\n", (char *)memchr(tab, -1, 7));
	//char str[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};
	int tab2[7] = {-49, 49, 1, -1, 0, -2, 2};
    //char *pos = memchr(str, 'z', 7);
	printf("%s\n", (char *)ft_memchr(tab2, -1, 7));
    return 0;
}
*/
