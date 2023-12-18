/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:25:10 by bfallah-          #+#    #+#             */
/*   Updated: 2023/12/18 11:01:43 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_line(int fd, char *rest, char *buffer);
char	*get_remaining(char *line);

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	int			rd;
	static char	*rest[MAX_FD];

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	rd = read(fd, 0, 0);
	if (fd < 0 || BUFFER_SIZE <= 0 || rd < 0)
	{
		free(rest[fd]);
		free(buffer);
		rest[fd] = NULL;
		buffer = NULL;
		return (NULL);
	}
	line = read_line(fd, rest[fd], buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	rest[fd] = get_remaining(line);
	return (line);
}

char	*get_remaining(char *line_buffer)
{
	char	*rest;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	rest = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*rest == 0)
	{
		free(rest);
		rest = NULL;
	}
	line_buffer[i + 1] = 0;
	return (rest);
}

char	*read_line(int fd, char *rest, char *buffer)
{
	ssize_t	b_read;
	char	*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(rest);
			return (NULL);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!rest)
			rest = ft_strdup("");
		tmp = rest;
		rest = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (rest);
}
