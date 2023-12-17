/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 08:35:53 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/17 21:06:33 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int		file_descriptor;
	char	*line;
	int		counter;

	counter = 0;
	file_descriptor = open("test.txt", O_RDONLY);
	if (file_descriptor == -1)
	{
		write(1, "Error opening file", 18);
		return (1);
	}
	while (counter <9)
	{
		printf("--------------------\n");

		printf("   This is test %d    :\n", counter);
		counter++;

		line = get_next_line(file_descriptor);
		if (line)
		{
			write(1,">>>>>  ",7);
			write(1, line, strlen(line));
			free(line);
		}
		printf("--------------------\n");
	}
	close(file_descriptor);
	return (0);
}
