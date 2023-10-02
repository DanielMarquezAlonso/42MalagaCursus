/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:50:33 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/02 19:54:31 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*mems;
	char	*aux;
	char	**array;
	size_t	i;
	size_t	len;

	aux = "";
	len = ft_strlen(s);
	i = 0; 
	while (i < len - 1)
	{
		aux = aux + s[i];
		if (s[i] == c)
			aux = s[i];
		i++;
	}
}
