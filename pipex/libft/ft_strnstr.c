/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:45:35 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/25 16:02:14 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//   The strnstr() function locates the first occurrence of the null-terminated
// 	 string needle in the string haystack, where not more than len characters 
// 	 are searched.  Characters that appear after a `\0' character are not 
// 	 searched.  Since the strnstr() function is a FreeBSD specific API, it
//   should only be used when portability is not a concern.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*aux;
	char	*aux2;

	aux = (char *) haystack;
	aux2 = (char *) needle;
	if (*needle == '\0')
		return (aux);
	i = 0;
	while (aux[i] != '\0' && len > i)
	{
		x = i;
		j = 0;
		while (aux[x] == aux2[j] && aux2[j] != '\0' && x < len)
		{
			x++;
			j++;
		}
		if (aux2[j] == '\0')
			return (&aux[x - j]);
		i++;
	}
	return (NULL);
}
