/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:58:30 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/06 16:34:59 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_char_hexa(unsigned int nbr, char conversion, int *cont)
{
	if (nbr >= 16)
	{
		ft_char_hexa(nbr / 16, conversion, cont);
		ft_char_hexa(nbr % 16, conversion, cont);
	}
	else
	{
		if (nbr <= 9)
			ft_printchar(nbr + '0', cont);
		else
		{
			if (conversion == 'x')
				ft_printchar(nbr - 10 + 'a', cont);
			else
				ft_printchar(nbr - 10 + 'A', cont);
		}
	}
}

void	ft_print_hex(unsigned int nbr, char conversion, int *cont)
{
	if (nbr == 0)
		ft_printchar('0', cont);
	else
		ft_char_hexa(nbr, conversion, cont);
}
