/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:50:03 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/14 21:07:01 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*char1;
	unsigned char		*char2;

	char1 = ((unsigned char *) s1);
	char2 = ((unsigned char *) s2);
	i = 0;
	while ((i < n))
	{
		if (char1[i] != char2[i])
		{
			return (char1[i] - char2[i]);
		}
		else
			i++;
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

   memcpy(str1, "abci54", 6);
   memcpy(str2, "abci", 6);

   ret = memcmp(str1, str2, 9);
   printf("%d\n",ret); 
   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   

   printf("\n");
    
   ret = ft_memcmp(str1, str2, 9);
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