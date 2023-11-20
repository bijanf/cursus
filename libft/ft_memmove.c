/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:07:46 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 09:31:49 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	temp_dest = ((unsigned char *) dest);
	temp_src = ((unsigned char *) src);
	if (src < dest)
	{
		temp_dest = temp_dest + n - 1;
		temp_src = temp_src + n - 1;
		while (n)
		{
			*temp_dest-- = *temp_src--;
			n--;
		}
	}
	else
	{
		while (n)
		{
			*temp_dest++ = *temp_src++;
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{

	char src[] = "lorem ipsum dolor sit amet";
	memmove(src+1, "consectetu", 5);
	printf("%s\n", src);

	char src2[] = "lorem ipsum dolor sit amet";
	ft_memmove(src2+1, "consectetu", 5);
	printf("%s\n", src2);
return 0;
}*/
