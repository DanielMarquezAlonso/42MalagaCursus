/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:29:03 by danmarqu          #+#    #+#             */
/*   Updated: 2023/11/06 16:35:01 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c, int *cont)
{
	write(1, &c, 1);
	(*cont)++;
}

static int	ft_get_type(const char type, va_list arg, int *cont)
{
	if (type == 'c')
		ft_printchar(va_arg(arg, int), cont);
	else if (type == 's')
		ft_printstr(va_arg(arg, char *), cont);
	else if (type == 'p')
		ft_print_ptr(va_arg(arg, uintptr_t), cont);
	else if (type == 'd' || type == 'i')
	{
		if (ft_printnbr(va_arg(arg, int), cont) == (-1))
			return (-1);
	}
	else if (type == 'u')
	{
		if (ft_print_unsigned_nbr(va_arg(arg, unsigned int), cont) == (-1))
			return (-1);
	}
	else if (type == 'x' || type == 'X')
		ft_print_hex(va_arg(arg, unsigned int), type, cont);
	else if (type == '%')
		ft_printchar('%', cont);
	return (0);
}

int	ft_printf(char const *s, ...)
{
	int		cont;
	int		i;
	va_list	arg;

	cont = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (ft_get_type(s[i], arg, &cont) == (-1))
				return (-1);
		}
		else
			ft_printchar(s[i], &cont);
		i++;
	}
	va_end(arg);
	return (cont);
}

// int main()
// {
// 	int num = 0;
// 	int num2 = 0;
// 	unsigned int ej = 302;
// 	num = ft_printf("que  to %d,he con x: %x _ %X", -10, 17, ej);
// 	printf("\n");
// 	num2 = printf("que  to %d,hexa con x: %x _ %X", -10, 17, ej);
// 	printf("\nel tamaño es %d y el del original: %d", num, num2);
// }