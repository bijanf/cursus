/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:14:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/13 12:40:30 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (c == ((unsigned char *) s)[i])
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

int main ()
{
  char * pch;
  char str[] = "Example string";
  pch = (char*) memchr (str, 'p', strlen(str));
  if (pch!=NULL)
    printf ("'p' found at position %ld.\n", pch-str+1);
  else
    printf ("'p' not found.\n");

  pch = (char*) ft_memchr (str, 'p', strlen(str));
  if (pch!=NULL)
    printf ("'p' found at position %ld.\n", pch-str+1);
  else
    printf ("'p' not found.\n");

   const char str1[] = "https://www.42bijan.com";
   const char ch = '.';
   char *ret1;
   char *ret2;


   ret1 = memchr(str1, ch, strlen(str1));

   printf("String after |%c| is - |%s|\n", ch, ret1);
   ret2 = ft_memchr(str1, ch, strlen(str1));
   printf("String after |%c| is - |%s|\n", ch, ret2);

   return(0);  
  
  return 0;
}
*/