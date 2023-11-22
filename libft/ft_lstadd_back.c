/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:48:49 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/18 14:02:03 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		str = *lst;
		while (str->next)
		{
			str = str->next;
		}
		str->next = new;
	}
}
