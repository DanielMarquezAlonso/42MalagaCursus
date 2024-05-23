/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:17:41 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/06 16:35:03 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

static char	*ft_unsigneditoa(unsigned int n)
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

int	ft_print_unsigned_nbr(unsigned int n, int *cont)
{
	char	*strnum;

	strnum = ft_unsigneditoa(n);
	if (strnum == NULL)
		return (-1);
	ft_printstr(strnum, cont);
	free(strnum);
	return (0);
}

static void	ft_put_ptr(uintptr_t ptr, int *cont)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16, cont);
		ft_put_ptr(ptr % 16, cont);
	}
	else
	{
		if (ptr <= 9)
			ft_printchar(ptr + '0', cont);
		else
			ft_printchar(ptr - 10 + 'a', cont);
	}
}

void	ft_print_ptr(uintptr_t ptr, int *cont)
{
	(*cont) += write(1, "0x", 2);
	if (ptr == 0)
		(*cont) += write(1, "0", 1);
	else
		ft_put_ptr(ptr, cont);
}
