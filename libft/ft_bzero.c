/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:15:55 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 15:57:39 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The bzero() function writes n zeroed bytes to the string s.
//		 If n is zero, bzero() does nothing.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}

// int main() {
//     char str1[20] = "camisa";
//     char str2[20] = "camisa";
//     size_t n = 1;
//     int equal = 1; 
//     size_t i = 0; 

//     ft_bzero(str1, n);
//     bzero(str2, n);

//     while (i < sizeof(str1)) {
//         if (str1[i] != str2[i]) {
//             equal = 0;
//             break;
//         }
//         i++;
//     }

//     if (equal) {
//         printf("igual\n");
//     } else {
//         printf("No son igual\n");
//     }

//     return 0;
// }