/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:44:51 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/16 09:08:41 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = (int )ft_strlen(str) - 1;
	if (str)
	{
		while (i > 0)
		{
			str++;
			i--;
		}
		while (*str)
		{
			if ((char)c == *str)
				return (str);
			str--;
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
	 char *s = "\t";
	 int c = 'o';
	 char *res1 = ft_strrchr(s, c);
	 char *res2 = strrchr(s, c);
	 printf("ft_strrchr: %s\n", res1);
	 printf("strrchr: %s\n", res2);
	 return (0);
}
*/
