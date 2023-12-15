/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:51:04 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/15 13:53:32 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE];
	static int index = 0;
	static int bytes_read = 0;
	char *line;
	int i;

	line = malloc(BUFFER_SIZE + 1);
	if (line == NULL)
	{
		write(1, "Error allocating memory", 24);
		return (NULL);
	}

	i = 0;

	while (1)
	{
		if (index == bytes_read)
		{
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			index = 0;
		}

		if (bytes_read <= 0)
		{
			if (line)
				free(line);
			return (i == 0 && bytes_read == 0) ? NULL : line;
		}
		if (buffer[index] == '\n' || i == BUFFER_SIZE - 1
		|| index == bytes_read)
		{
			if (i == 0)
				return ("\n");
			line[i] = '\0';
		    index++;
			return (line);

		}


		line[i++] = buffer[index++];
	}
}
