/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:44:58 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/25 16:45:28 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The strrchr() function is identical to strchr(), except it locates the
//      last occurrence of c.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		i;

	aux = (char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (aux[i] == (unsigned char)c)
			return (&aux[i]);
		i--;
	}
	if (c == 0)
		return (&aux[i]);
	return (0);
}

// int main()
// {
// 	char s = '\0';
// 	//const char as[] = "\0";
// 	int c = 111;

// 	printf("mia: %s", ft_strrchr(&s, c));
//  	printf("\noriginal: %s", strrchr(&s, c));
// }