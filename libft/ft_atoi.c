/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:08:17 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 15:25:13 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	val;
	int	i;

	i = 0;
	sign = 1;
	while ((nptr[i] >= '\a' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	val = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		val = (val * 10) + (nptr[i] - '0');
		i++;
	}
	return (val * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];

   strcpy(str, "+-42lyon");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);


	printf("-----------------\n");
   char str1[20];
   strcpy(str1, "+-42lyon");
   val = ft_atoi(str1);
   printf("String value = %s, Int value = %d\n", str1, val);

   strcpy(str1, "tutorialspoint.com");
   val = ft_atoi(str1);
   printf("String value = %s, Int value = %d\n", str1, val);
   return(0);
}
*/
