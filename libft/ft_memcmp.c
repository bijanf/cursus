/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:50:03 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 11:09:30 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*char1;
	const unsigned char	*char2;

	if (s1 == s2 || n == 0)
		return (0);
	char1 = (const unsigned char *) s1;
	char2 = (const unsigned char *) s2;
	while (n--)
	{
		if (*char1 != *char2)
			return (*char1 - *char2);
		if (n)
		{
			char1++;
			char2++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "salut", 6);
   memcpy(str2, "salut", 6);

   ret = memcmp(str1, str2, 5);
   printf("%d\n",ret);
   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }


   printf("\n");

   ret = ft_memcmp(str1, str2, 5);
   printf("%d\n",ret);
   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
*/
