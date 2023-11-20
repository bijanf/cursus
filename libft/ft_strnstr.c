/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:45:16 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 11:12:55 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	length_little;

	length_little = ft_strlen(little);
	if ((int)length_little == 0)
		return ((char *)big);
	if (length_little > len)
		return (NULL);
	i = 0;
	while (i <= (int)len)
	{
		if ((big[0] == little[0])
			&& (ft_strncmp(big, little, length_little) == 0))
		{
			return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main () {
   const char haystack[20] = "";
   const char needle[10] = "";
   char *ret;

   ret = strnstr(haystack, needle, 5);
   printf("The substring is: %s\n", ret);

   ret = ft_strnstr(haystack, needle, 5);
   printf("The substring is: %s\n", ret);
   return(0);
}
*/
