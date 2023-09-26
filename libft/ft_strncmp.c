/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:43 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/23 17:09:07 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*aux;
	char	*aux2;

	i = 0;
	aux = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((aux[i] != '\0' && aux2[i] != '\0') && i < (n - 1))
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