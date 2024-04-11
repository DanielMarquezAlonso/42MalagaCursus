/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:35:44 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/25 16:09:37 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2. 
//		Both strings are assumed to be n bytes long.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*aux2;

	i = 0;
	aux = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (aux[i] != aux2[i])
			return ((unsigned char)aux[i] - (unsigned char)aux2[i]);
		i++;
	}
	return ((unsigned char)aux[i] - (unsigned char)aux2[i]);
}

// int main()
// {
// 	char src1[] = "hola";
// 	char src2[] = "hola";
// 	printf("mia: %d",ft_strncmp(src1, src2, 5));
// 	printf("\noriginal: %d", strncmp(src1, src2, 5));

// }