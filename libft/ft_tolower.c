/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:00:48 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 16:02:59 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The tolower() function converts an upper-case letter to the 
//      corresponding lower-case letter.  The argument must be representable 
//      as an unsigned char or the value of EOF.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int main()
// {
// 	int ej = 120;

// 	printf("mia: %d", ft_tolower(ej));
// 	printf("\noriginal: %d", tolower(ej));
// }