/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:38:48 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/11 18:44:49 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The isprint() function tests for any printing character, including space
// 	  (` ').  The value of the argument must be representable as an unsigned 
// 	  char or the value of EOF.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}



// int main()
// {
// 	int n = 127;
// 	printf("%d  ", ft_isprint(n));
// 		printf("%d  ", isprint(n));
// 	return 0;

// }