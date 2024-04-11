/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:35:19 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 16:02:00 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	while (i < n)
	{
		aux[i] = (char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	size_t longitud = 3;
// 	char b[] = "camisa";
// 	char c[] = "camisa";

//     printf("%s\n", b);
// 	ft_memset(b, 'a', longitud);
//     printf("%s\n", b);

// 	printf("%s\n", c);
// 	memset(c, 'a', longitud);
//     printf("%s\n", c);
// }