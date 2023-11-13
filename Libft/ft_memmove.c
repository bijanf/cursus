/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:07:46 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/13 12:11:38 by bfallah-         ###   ########.fr       */
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
		temp_dest = temp_dest + n;
		temp_src = temp_src + n;
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

	char csrc[100] = "Geeksfor";  
	memmove(csrc+4, csrc, strlen(csrc)+1);  
	printf("%s\n", csrc);  

	char csrc2[100] = "Geeksfor";
	ft_memmove(csrc2+4, csrc2, strlen(csrc2)+1);  
	printf("%s\n", csrc2);

	char csrc3[100] = "";
	ft_memmove(csrc3+4, csrc3, strlen(csrc3)+1);  
	printf("%s\n", csrc3);
	char csrc4[100] = "";
	memmove(csrc4+4, csrc4, strlen(csrc4)+1);  
	printf("%s\n", csrc4);


return 0;  
}   
*/