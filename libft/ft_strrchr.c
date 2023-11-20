/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:44:51 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 11:36:45 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

int main()
{
	 char s[] = "tripouille";
	 //int c = 'o';
	 char *res1 = ft_strrchr(s, 0);
	 char *res2 = strrchr(s, 0);
	 printf("ft_strrchr: %s\n", res1);
	 printf("strrchr: %s\n", res2);
	 printf("strrchr: %s\n", s + strlen(s));

	 return (0);
}
*/
