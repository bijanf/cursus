/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:52:05 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/14 23:03:29 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str)
	{
		while (*str)
		{
			if ((char)c == *str)
				return (str);
			str++;
		}
		if ((char)c == 0)
			return (str);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	 char *s = "Hell world!";
	 int c = 'o';
	 char *res1 = ft_strchr(s, c);
	 char *res2 = strchr(s, c);
	 printf("ft_strchr: %s\n", res1);
	 printf("strchr: %s\n", res2);
	 return (0);
}
*/
