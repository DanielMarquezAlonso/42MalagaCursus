/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:52:40 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/02 16:44:47 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)

#include "libft.h"

int	checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mems;
	size_t	i;
	size_t	len;
	size_t	cut;

	i = 0;
	cut = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (0);
	while (s1[i] && checkset(s1[i], set))
		i++;
	while (len > i && checkset(s1[len - 1], set))
		len--;
	mems = malloc(sizeof(*s1) * (len - i + 1));
	if (!mems)
		return (NULL);
	while (i < len)
	{
		mems[cut] = s1[i];
		cut++;
		i++;
	}
	mems[cut] = 0;
	return (mems);
}

// int main()
// {
// 	char *aux = "Lets Gyo";
// 	char *cont = "Le o";
// 	printf ("original: %s", aux);
// 	printf ("\nresultado: %s", ft_strtrim(aux, cont));
// 	return 0;
// }
