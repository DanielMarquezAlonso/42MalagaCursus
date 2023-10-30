/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:20:41 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/30 21:54:10 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t	ft_unsignedintlen(unsigned int n)
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

char	*ft_unsigneditoa(unsigned int n)
{
	long	nb;
	size_t	numlen;
	char	*mem;

	nb = n;
	numlen = ft_unsignedintlen(n);
	mem = malloc(sizeof(char) * numlen + 1);
	if (!mem)
		return (NULL);
	if (nb == 0)
		mem[0] = '0';
	mem[numlen] = '\0';
	numlen--;
	while (nb)
	{
		mem[numlen] = (nb % 10) + '0';
		numlen--;
		nb = nb / 10;
	}
	return (mem);
}

void ft_print_unsigned_nbr(unsigned int n, int *cont)
{
    char *strnum;
    
    strnum = ft_unsigneditoa(n);
    ft_printstr(strnum, cont);
    free(strnum);
}