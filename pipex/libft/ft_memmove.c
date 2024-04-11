/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:20:50 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/16 16:07:43 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	dest = (char *)s1;
	src = (char *)s2;
	if (dest > src)
	{
		while (n-- > 0)
			dest[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

// int main() {
//     char dest[20] = "armar";
//     const char src[20] = "hola";
// 	char dest2[20] = "armar";
//     const char src2[20] = "hola";
//     size_t n = 2;

// 	printf(" antes de %s", dest);
// 	ft_memmove(dest, src, n);
// 	printf(" \ndespues de %s", dest);
// 	printf(" \nORIGINALantes de %s", dest2);
// 	memmove(dest2, src2, n);
// 	printf(" \ndespues de %s", dest2);

// }