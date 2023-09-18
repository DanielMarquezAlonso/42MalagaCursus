/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:06:52 by usuario           #+#    #+#             */
/*   Updated: 2023/09/18 21:30:17 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	tes;

	i = 0;
	j = 0;
	tes = 0;
	while (dst[i] != '\0')
		i++;
	while (src[tes] != '\0')
		tes++;
	if (size <= i)
		tes = tes + size;
	else
		tes = tes + i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (tes);
}
// int main(void)
// {
// 	char des[20] = "hola";
// 	char src[20] = "casa";

// 	printf(strlcpy(des, src));
// }