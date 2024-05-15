/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:32:56 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/16 15:58:00 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*aux;
	char	*aux2;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	aux = (char *)s1;
	aux2 = (char *)s2;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
	return (aux);
}

// int main() {
//     char dest[20] = "armar";
//     const char src[20] = "hola";
//     size_t n = 2;

// 	printf(" antes de %s", dest);
// 	ft_memcpy(dest, src, n);
// 	printf(" despues de %s", dest);
// 	// printf(" antes de %s", dest);
// 	// memcpy(dest, src, n);
// 	// printf(" despues de %s", dest);

// }
