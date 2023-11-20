/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:15:55 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 16:51:04 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	joint = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (joint == NULL)
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

	s = ft_strjoin("tripouille", "42");
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
