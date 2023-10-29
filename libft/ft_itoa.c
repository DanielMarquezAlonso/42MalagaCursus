/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:49:56 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/25 13:52:01 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	int	cont;

	cont = 0;
	if (n <= 0)
		cont++;
	while (n != 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	numlen;
	char	*mem;

	nb = n;
	numlen = ft_intlen(n);
	mem = malloc(sizeof(char) * numlen + 1);
	if (!mem)
		return (NULL);
	if (nb == 0)
		mem[0] = '0';
	mem[numlen] = '\0';
	numlen--;
	if (nb < 0)
	{
		mem[0] = '-';
		nb = nb * (-1);
	}
	while (nb)
	{
		mem[numlen] = (nb % 10) + '0';
		numlen--;
		nb = nb / 10;
	}
	return (mem);
}

// int	main(void)
// {	
// 	char *ej = ft_itoa(324);

// 	printf("%s", ej);
// 	return (0);
// }	
