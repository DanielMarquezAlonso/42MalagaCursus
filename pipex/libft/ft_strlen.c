/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:14:06 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 16:02:49 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Devuelve el número de caracteres de la cadena "s", sin incluir el nulo de 
//terminación.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// 	printf("%zu    ", strlen(""));
// 	printf("%zu", ft_strlen(""));
// }