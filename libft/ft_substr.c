/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:59:52 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/08 17:18:33 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*mems1;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	mems1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!mems1)
		return (NULL);
	ft_strlcpy(mems1, (s + start), (len + 1));
	return (mems1);
}
