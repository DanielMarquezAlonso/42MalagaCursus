/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:29:03 by danmarqu          #+#    #+#             */
/*   Updated: 2023/10/29 22:27:29 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_printchar(char c, int *cont)
{
	write(1, &c, 1);
	(*cont)++;
}

static void	ft_get_type(char type, va_list arg, int *cont)
{
	int	c;

	if (type == 'c')
	{
		c = va_arg(arg, int);
		write(1, &c, 1);
		(*cont)++;
	}
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
	num = ft_printf("Hola que %c taa", 'k');
	printf("\n");
	num2 = printf("Hola que %c taa", 'k');
	printf("\nel tamaño es %d y el del original: %d", num, num2);
}
