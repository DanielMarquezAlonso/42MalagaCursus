/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:28:42 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/26 11:47:28 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcpy() copies up to dstsize - 1 characters from the string src to
//  dst, NUL-terminating the result if dstsize is not 0.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
// int main(void)
// {
// 	char des[20] = "hola";
// 	char src[20] = "casa";

// 	printf(strlcpy(des, src));
// }