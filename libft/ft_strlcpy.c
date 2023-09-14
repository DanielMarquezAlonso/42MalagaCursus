/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:28:42 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/14 19:55:05 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {}

int main()
{
	char des[20] = "hola";
	char src[20] = "casa";

	printf(strlcpy(des, src));
}