/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:17:21 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/03 19:56:53 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *s, int *cont)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		(*cont) += 6;
		return ;
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
		(*cont)++;
	}
}

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

static char	*ft_itoa(int n)
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

void	ft_printnbr(int n, int *cont)
{
	char	*strnum;

	strnum = ft_itoa(n);
	ft_printstr(strnum, cont);
	free(strnum);
}
