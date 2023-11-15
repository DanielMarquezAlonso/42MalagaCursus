/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:18:54 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/15 20:14:32 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*aux;
	int		i;

	aux = (char *) s;
	i = 0;
	while (aux[i] != '\0')
	{
		if (aux[i] == (unsigned char)c)
			return (&aux[i]);
		i++;
	}
	if (aux[i] == (unsigned char)c)
		return (&aux[i]);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mems;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	mems = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!mems)
		return (NULL);
	ft_strlcpy(mems, s1, len1 + 1);
	ft_strlcat(mems, s2, (len1 + len2) + 1);
	return (mems);
}
