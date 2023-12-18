/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 08:35:53 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/18 10:14:28 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"
#include <stdio.h>

#define COLOR_RESET "\x1b[0m"
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN "\x1b[36m"

int main()
{
	int		file_descriptor;
	char	*line;
	int		counter;
	int fd[4];

	counter = 0;
	file_descriptor = open("test.txt", O_RDONLY);
	if (file_descriptor == -1)
	{
		write(1, "Error opening file", 18);
		return (1);
	}
	while (counter < 14)
	{
		printf(COLOR_CYAN "--------------------\n");

		printf(COLOR_GREEN "   This is test %d    :\n", counter);
		counter++;

		line = get_next_line(file_descriptor);
		if (line)
		{
			printf(COLOR_MAGENTA ">>>>>>>>>> ");
			printf(COLOR_YELLOW "%s\n", line);
			free(line);
		}
		printf(COLOR_CYAN "--------------------\n");
		sleep(1);
	}
	close(file_descriptor);
	printf(COLOR_RED "----------------------\n");
	printf(COLOR_RED " 						\n");
	printf(COLOR_RED "      Now BoNUS		\n");
	printf(COLOR_RED "----------------------\n");
	fd[0] =  open("test.txt", O_RDONLY);
	fd[1] =  open("test.txt", O_RDONLY);
	fd[2] =  open("test.txt", O_RDONLY);
	fd[3] =  open("test.txt", O_RDONLY);

	while (counter < 59)
	{
		printf(COLOR_CYAN "--------------------\n");

		printf(COLOR_GREEN "   This is test %d    :\n", counter);
		counter++;
		printf(COLOR_GREEN "      This is file %d    :\n", ((int ) (counter / 15)));
		line = get_next_line(fd[(int ) ((counter / 15))]);
		if (line)
		{
			printf(COLOR_MAGENTA ">>>>>>>>>> ");
			printf(COLOR_YELLOW "%s\n", line);
			free(line);
		}
		printf(COLOR_CYAN "--------------------\n");
		sleep (1);
	}
	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	close(fd[3]);

	return (0);
}
