/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:29:03 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/30 21:54:07 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_printchar(char c, int *cont)
{
	write(1, &c, 1);
	(*cont)++;
}

static void	ft_get_type(const 	char type, va_list arg, int *cont)
{
	if (type == 'c')
		ft_printchar(va_arg(arg, int), cont);
	else if (type == 's')
		ft_printstr(va_arg(arg, char *), cont);
	// else if (type == 'p')
	// 	ft_print_ptr(va_arg(arg, unsigned long long));
	else if (type == 'd' || type == 'i')
		ft_printnbr(va_arg(arg, int), cont);
	else if (type == 'u')
		ft_print_unsigned_nbr(va_arg(arg, unsigned int), cont);
	// else if (type == 'x')
	// 	ft_print_hex_nbr(va_arg(arg, unsigned int), cont);

}

int	ft_printf(char const *s, ...)
{
	int		cont;
	int		i;
	va_list	arg;

	cont = 0;
	i = 0;
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			ft_get_type(s[i], arg, &cont);
		}
		else
		{
			ft_printchar(s[i], &cont);
		}
		i++;
	}
	va_end(arg);
	return (cont);
}

int main()
{
	int num = 0;
	int num2 = 0;
	//num = ft_printf("que %s tengo %d años,unsigned: %u", "hola", 17, 20);
	printf("\n");
	num2 = printf("que %s tengo %d años,unsigned: %x", "hola", 17, 2200);
	printf("\nel tamaño es %d y el del original: %d", num, num2);
}
