/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 08:35:53 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/15 13:52:12 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"

int main()
{
	int		file_descriptor;
	char	*line;

	file_descriptor = open("test.txt", O_RDONLY);
	if (file_descriptor == -1)
	{
		write(1, "Error opening file", 18);
		return (1);
	}

	line = get_next_line(file_descriptor);
	write(1, line, strlen(line));
	if (line)
		free(line);
	close(file_descriptor);
	return (0);
}
