/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:56 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/14 19:29:12 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//      The atoi() function converts the initial portion of the string pointed
// 	 to by str to int representation.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	cont;

	i = 0;
	cont = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		cont = (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * cont);
}

// int main()
// {
// 	char *n = "\t\v\f\r\n +1234";
//  	int i1 = atoi(n);
//  	int i2 = ft_atoi(n);
// 	printf("mia: %d", i2);
//  	printf("\noriginal: %d\n", i1);
//  	if (i1 == i2)
//  		exit(printf("succes"));
//  	exit(printf("fail"));
// }
// 	char *n = "345";
// 	printf("mia: %d", ft_atoi(n));
// 	printf("\noriginal: %d", atoi(n));
// if (!str)
// 	return (0);