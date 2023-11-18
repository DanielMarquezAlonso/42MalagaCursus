/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:19:03 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/18 14:52:00 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*newline(char *buffer)
{
	
}


char	*get_next_line(int fd)
{
	static char buffer;
	int			bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

int	main(void)
{
	int		fd;
	char	*next_line;
	int		count;

	count = 1;
	fd = open("example.txt", O_RDONLY);
	next_line = get_next_line(fd);
	while (count <= 4)
	{
		printf("%d:%s\n", count, next_line);
		count++;
	}
	next_line = NULL;
	close(fd);
	return (0);
}
