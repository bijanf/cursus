/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:10:36 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/17 11:22:59 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	char	*res;

	s = 0;
	e = ft_strlen(s1);
	if (s1 && set)
	{
		while (s1[s] && ft_strchr(set, s1[s]))
			s++;
		while (s1[e - 1] && ft_strchr(set, s1[e - 1]))
			e--;
		res = (char *) malloc(sizeof(char) * (e - s + 1));
		if (!res)
			return (NULL);
		ft_strlcpy(res, &s1[s], (e - s + 1));
		return (res);
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("bijan", "bn"));
	printf("%s\n", ft_strtrim("FallaH", "FH"));
	return 0;
}
*/
