/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:19:03 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/09 18:44:24 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_file(int fd)
{
	static char	*cup_buffer;
	int			bytes_read;

	cup_buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!cup_buffer)
		return (NULL);
	bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
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

// int	main(void)
// {
// 	int		fd;
// 	char	*next_line;
// 	int		count;

// 	count = 0;
// 	fd = open("example.txt", O_RDONLY);
// 	next_line = get_next_line(fd);
// 	count++;
// 	printf("%d:%s\n", count, next_line);
// 	printf("%d:%s\n", count, next_line);
// 	next_line = NULL;
// 	close(fd);
// 	return (0);
// }
