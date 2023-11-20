/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:13:44 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 14:48:24 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;
	size_t	src_l;

	src_l = ft_strlen(src);
	length = 0;
	i = 0;
	while ((i < size) && dst[i])
		i++;
	while ((i + length + 1 < size) && src[length])
	{
		dst[i + length] = src[length];
		length++;
	}
	if (i != size)
		dst[i + length + 1] = '\0';
	return (i + src_l);
}
/*
#include <stdio.h>
#include <bsd/stdlib.h>
#include <bsd/string.h>

int main()
{
	char dest[30]; memset(dest, 0, 30);
    char * src = (char *)"AAAAAAAAA";
    dest[0] = 'B';
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%zu\n",strlcat(dest, src, 4));
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("===================\n");
	memset(dest, 0, 30);
    dest[0] = 'B';
	src = (char *)"AAAAAAAAA";
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%zu\n",ft_strlcat(dest, src, 4));
	printf("%s\n", dest);
	printf("%s\n", src);
	//printf("%zu\n",ft_strlcat(dest, src, 1));
	//printf("%s\n", dest);
	//printf("%s\n", src);
	//memset(dest, 'B', 4);
	//printf("%s\n", dest);
	//printf("%s\n", src);
	//printf("%zu\n",ft_strlcat(dest, src, 3));
	//printf("%s\n", dest);
	//printf("%s\n", src);
	//printf("%zu\n",ft_strlcat(dest, src, 6));
	//printf("%s\n", dest);
	//printf("BBBBA");
	return 0;
}
*/
