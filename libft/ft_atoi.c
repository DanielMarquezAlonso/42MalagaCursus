/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:56 by danmarqu          #+#    #+#             */
/*   Updated: 2023/09/21 20:02:30 by danmarqu         ###   ########.fr       */
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
	int	simbol;

	simbol = 0;
	i = 0;
	cont = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		simbol++;
		if (simbol > 1)
			return (0);
		if (str[i] == '-')
			cont = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * cont);
}

int main()
{
	char n[] = "  -1123";
	printf("mia: %d", ft_atoi(n));
	printf("\noriginal: %d", atoi(n));
}
// if (!str)
// 	return (0);