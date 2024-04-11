/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:04:57 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 16:02:04 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The strchr() function locates the first occurrence of c (converted to a
//      char) in the string pointed to by s.  The terminating null character is
//      considered to be part of the string; therefore if c is `\0', the func-
//      tions locate the terminating `\0'.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*aux;
	int		i;

	aux = (char *) s;
	i = 0;
	while (aux[i] != '\0')
	{
		if (aux[i] == (unsigned char)c)
			return (&aux[i]);
		i++;
	}
	if (aux[i] == (unsigned char)c)
		return (&aux[i]);
	return (0);
}

// int main()
// {
// 	const char as[] = "";
// 	int c = 111;

// 	printf("mia: %s", ft_strchr(as, c));
//  	printf("\noriginal: %s", strchr(as, c));
// }
