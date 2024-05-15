/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:50:16 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 17:32:05 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The memchr() function locates the first occurrence of c (converted to an
//      unsigned char) in string s.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (unsigned char)c)
			return ((void *)&aux[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char as[] = "loc";
// 	int c = 111;

// 	printf("mia: %s", ft_memchr(as, c, 2));
//  	printf("\noriginal: %s", memchr(as, c, 2));

// }