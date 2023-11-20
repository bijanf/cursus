/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:10:46 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/20 16:31:20 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp1;
	char	*tmp2;

	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	tmp1 = ft_calloc((len + 1), sizeof(char));
	if (!tmp1)
		return (NULL);
	s = s + start;
	tmp2 = tmp1;
	*(tmp1 + len) = '\0';
	while (len && *s)
	{
		*tmp1++ = *s++;
		len--;
	}
	return (tmp2);
}
