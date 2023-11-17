/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:15:55 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/17 10:59:51 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	joint = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!joint)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		joint[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		joint[i] = s2[j];
		i++;
		j++;
	}
	joint[i] = '\0';
	return (joint);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int main()
{
	char *s;

	s = ft_strjoin("", "");
	printf("joined: %s\n", s);
	free(s);

	s = ft_strjoin(
		"----------------------------------------",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
	printf("joined: %s\n", s);
	free(s);

	return 0;
}
*/
