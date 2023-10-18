/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:50:33 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/18 15:54:52 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.

#include "libft.h"

static int	destroy(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (-1);
}

static size_t	counterword(char const *s, char c)
{
	size_t	count;
	size_t	j;

	count = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			while (s[j] != c && s[j])
				j++;
			count++;
		}
		while (s[j] == c && s[j] != '\0')
			j++;
	}
	return (count);
}

static int	fill_array(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			array[a++] = ft_substr(s, j, i - j);
			if (!array[a - 1])
				return (destroy(array));
		}
		else
			i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	a = 0;
	array = malloc((counterword(s, c) + 1) * sizeof(char *));
	if (!array)
		return (0);
	if (fill_array(array, s, c) == -1)
		return (NULL);
	array[counterword(s, c)] = NULL;
	return (array);
}

// int main()
// {
// 	char *aux = "  hola que    tal todos";
// 	char ej = ' ';
// 	printf("%zu", counterword(aux, ej));
// }

	// array = malloc((counterword(s, c) + 1) * sizeof(char *));
	// if (!array)
	// 	return (0);

// char	**ft_split(char const *s, char c)
// {
// 	char	**array;
// 	size_t	i;
// 	size_t	j;
// 	size_t	a;

// 	i = 0;
// 	a = 0;
// 	array = malloc((counterword(s, c) + 1) * sizeof(char *));
// 	if (!array)
// 		return (0);
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] != c && s[i] != '\0')
// 		{
// 			j = i;
// 			while (s[i] != c && s[i] != '\0')
// 				i++;
// 			array[a++] = ft_substr(s, j, i - j);
// 			if (!array[a - 1])
// 				return (destroy(array));
// 		}
// 		else
// 			i++;
// 	}
// 	array[a] = NULL;
// 	return (array);
// }
// char	*ft_malloc(char **array, size_t words)
// {
// 	if (!array)
// 		return (0);
// 	array = malloc(words * sizeof(char *));
// 	if (!array)
// 		return (0);
// 	return (array);
// }