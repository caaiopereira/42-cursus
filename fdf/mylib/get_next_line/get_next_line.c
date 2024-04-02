/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:10:35 by caiperei          #+#    #+#             */
/*   Updated: 2023/11/21 11:14:21 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*rest_line(char *line)
{
	size_t	i;
	char	*rest;
	size_t	count;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!(line[i]))
	{
		free(line);
		return (NULL);
	}
	if (line[i] == '\n')
		i++;
	rest = malloc(sizeof(char) * ft_strlen(line) - i + 1);
	if (!(rest))
		return (NULL);
	count = 0;
	while (line[i])
		rest[count++] = line[i++];
	rest[count] = '\0';
	free(line);
	return (rest);
}

static char	*cut_line(char *line)
{
	size_t	i;
	char	*cut;

	i = 0;
	if (!*line)
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	cut = malloc(sizeof(char) * i + 2);
	if (!(cut))
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		cut[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
		cut[i++] = '\n';
	cut[i] = '\0';
	return (cut);
}

static char	*read_line(char *line, int fd)
{
	char	*buffer;
	int		count;

	count = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!(buffer))
		return (NULL);
	while (count > 0 && !ft_strchr(line, '\n'))
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[count] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*string;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	string = read_line(string, fd);
	if (!(string))
		return (NULL);
	line = cut_line(string);
	string = rest_line(string);
	return (line);
}
