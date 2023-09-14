/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:32:56 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/14 19:24:24 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <strings.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*aux;
	char	*aux2;

	i = 0;
	aux = (char *)s1;
	aux2 = (char *)s2;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
}

// int main() {
//     char dest[20];
//     const char src[20] = "";
//     size_t n = 2;

// 	printf(" antes de %s", dest);
// 	ft_memcpy(dest, src, n);
// 	printf(" despues de %s", dest);
// 	printf(" antes de %s", dest);
// 	memcpy(dest, src, n);
// 	printf(" despues de %s", dest);

// }