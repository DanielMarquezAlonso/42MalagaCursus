/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:10:46 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/16 16:25:25 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mem)
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	mem[i] = NULL;
	return (mem);
}
