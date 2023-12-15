/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:51:04 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/15 11:12:04 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;
	char	*line;

	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1 || BUFFER_SIZE < 0)
	{
		write(1, "Error reading file", 19);
		return (NULL);
	}
	if (bytes_read == 0)
		return (NULL);
	line = malloc(bytes_read + 1);
	if (line == NULL)
	{
		write(1, "Error allocating memory", 24);
		return (NULL);
	}
	ft_memcpy(line, buffer, bytes_read);
	line[bytes_read] = '\0';
	return (line);
}
