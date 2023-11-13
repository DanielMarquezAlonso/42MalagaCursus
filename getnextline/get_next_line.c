/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:19:03 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 19:00:40 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *newline(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] || (buffer[i]) != '\n')
	{
		// if (buffer[i] == '\n')
		// {
		// 	ft_bzero(buffer, i);
		// }
		i++;
	}
	return (buffer);
}

static char	*read_file(int fd)
{
	static char	*cup_buffer;
	int			bytes_read;
	// int			cont;

	// cont = 0;
	cup_buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!cup_buffer)
		return (NULL);
	bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
	cup_buffer = newline(cup_buffer);
	if (bytes_read <= 0)
	{
		free(cup_buffer);
		return (NULL);
	}
	return (cup_buffer);
}

char	*get_next_line(int fd)
{
	char	*b_buffer;

	b_buffer = read_file(fd);
	return (b_buffer);
}

int	main(void)
{
	int		fd;
	char	*next_line;
	int		count;

	count = 0;
	fd = open("example.txt", O_RDONLY);
	next_line = get_next_line(fd);
	count++;
	printf("%d:%s\n", count, next_line);
	printf("%d:%s\n", count, next_line);
	next_line = NULL;
	close(fd);
	return (0);
}
